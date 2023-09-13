#include <sys/syscall.h>

.globl	_start
_start:
	movq $SYS_exit,  %rax
	movq $1,	 %rdi
	syscall