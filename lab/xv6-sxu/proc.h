// Per-CPU state
//TODO CPU行为定义
struct cpu {
  uchar apicid;                // Local APIC ID //标示CPU
  struct context *scheduler;   // swtch() here to enter scheduler //进行上下文切换
  struct taskstate ts;         // Used by x86 to find stack for interrupt //描述任务状态
  struct segdesc gdt[NSEGS];   // x86 global descriptor table //全局描述符表
  volatile uint started;       // Has the CPU started? //CPU是否启动
  int ncli;                    // Depth of pushcli nesting. //嵌套的深度，用于管理中断
  int intena;                  // Were interrupts enabled before pushcli? //中断是否开启
  struct proc *proc;           // The process running on this cpu or null //当前CPU运行的进程
};

extern struct cpu cpus[NCPU];
extern int ncpu;

//PAGEBREAK: 17
// Saved registers for kernel context switches.
// Don't need to save all the segment registers (%cs, etc),
// because they are constant across kernel contexts.
// Don't need to save %eax, %ecx, %edx, because the
// x86 convention is that the caller has saved them.
// Contexts are stored at the bottom of the stack they
// describe; the stack pointer is the address of the context.
// The layout of the context matches the layout of the stack in swtch.S
// at the "Switch stacks" comment. Switch doesn't save eip explicitly,
// but it is on the stack and allocproc() manipulates it.
struct context {
  uint edi;
  uint esi;
  uint ebx;
  uint ebp;
  uint eip;
};

//TODO进程状态的描述
enum procstate { UNUSED, EMBRYO, SLEEPING, RUNNABLE, RUNNING, ZOMBIE };

/*
UNUSED：进程槽未被使用。
EMBRYO：进程正在创建中。
SLEEPING：进程正在等待某个条件变为真。
RUNNABLE：进程在运行队列中，等待被调度运行。
RUNNING：进程正在 CPU 上运行。
ZOMBIE：进程已经终止，但其父进程还没有调用 wait() 来读取它的退出状态。
*/

// Per-process state
struct proc {
  uint sz;                     // Size of process memory (bytes)
  pde_t* pgdir;                // Page table
  char *kstack;                // Bottom of kernel stack for this process
  enum procstate state;        // Process state
  int pid;                     // Process ID
  struct proc *parent;         // Parent process
  struct trapframe *tf;        // Trap frame for current syscall
  struct context *context;     // swtch() here to run process
  void *chan;                  // If non-zero, sleeping on chan
  int killed;                  // If non-zero, have been killed
  struct file *ofile[NOFILE];  // Open files
  struct inode *cwd;           // Current directory
  char name[16];               // Process name (debugging)
};

/*
uint sz;：进程的内存大小，单位是字节。
pde_t* pgdir;：进程的页表，用于虚拟内存到物理内存的映射。
char *kstack;：进程的内核栈底部，用于在内核模式下保存进程的执行状态。
enum procstate state;：进程的状态，例如运行中、可运行（在运行队列中）、不可运行（睡眠中）等。
int pid;：进程的 ID。
struct proc *parent;：进程的父进程。
struct trapframe *tf;：当前系统调用的陷阱帧，用于保存中断时的 CPU 状态。
struct context *context;：进程的运行上下文，用于进程切换。
void *chan;：如果非零，表示进程正在等待某个条件，睡眠在这个 chan 上。
int killed;：如果非零，表示进程已经被杀死。
struct file *ofile[NOFILE];：进程打开的文件数组。
struct inode *cwd;：进程的当前目录。
char name[16];：进程的名字，用于调试。
*/

// Process memory is laid out contiguously, low addresses first:
//   text
//   original data and bss
//   fixed-size stack
//   expandable heap
