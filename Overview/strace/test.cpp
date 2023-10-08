execve("/usr/bin/gcc", ["gcc", "a.c"], 0x7ffec2f19820 /* 50 vars */) = 0
brk(NULL)                               = 0xb57000
arch_prctl(0x3001 /* ARCH_??? */, 0x7ffd46dffb40) = -1 EINVAL (Invalid argument)
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f2afb8f9000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/x86_64", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/tls/haswell/x86_64", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/tls/haswell", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/tls/avx512_1/x86_64", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/tls/avx512_1", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/tls/x86_64", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/tls", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/haswell/avx512_1/x86_64", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/haswell/avx512_1", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/haswell/x86_64", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/haswell", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/avx512_1/x86_64", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/avx512_1", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64/x86_64", 0x7ffd46dfed90) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
stat("/usr/local/cuda-12.1/lib64", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "tls/haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "tls/haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "tls/haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "tls/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "tls/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "tls/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "tls/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=133479, ...}) = 0
mmap(NULL, 133479, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f2afb8d8000
close(3)                                = 0
openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 832) = 832
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\30x\346\264ur\f|Q\226\236i\253-'o"..., 68, 880) = 68
fstat(3, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\30x\346\264ur\f|Q\226\236i\253-'o"..., 68, 880) = 68
mmap(NULL, 2037344, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f2afb6e6000
mmap(0x7f2afb708000, 1540096, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x22000) = 0x7f2afb708000
mmap(0x7f2afb880000, 319488, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19a000) = 0x7f2afb880000
mmap(0x7f2afb8ce000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1e7000) = 0x7f2afb8ce000
mmap(0x7f2afb8d4000, 13920, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f2afb8d4000
close(3)                                = 0
mmap(NULL, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f2afb6e3000
arch_prctl(ARCH_SET_FS, 0x7f2afb6e3740) = 0
mprotect(0x7f2afb8ce000, 16384, PROT_READ) = 0
mprotect(0x517000, 12288, PROT_READ)    = 0
mprotect(0x7f2afb928000, 4096, PROT_READ) = 0
munmap(0x7f2afb8d8000, 133479)          = 0
brk(NULL)                               = 0xb57000
brk(0xb78000)                           = 0xb78000
ioctl(2, TCGETS, 0x7ffd46dff980)        = -1 ENOTTY (Inappropriate ioctl for device)
brk(0xb9e000)                           = 0xb9e000
openat(AT_FDCWD, "/usr/lib/locale/locale-archive", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=3035952, ...}) = 0
mmap(NULL, 3035952, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f2afb3fd000
close(3)                                = 0
openat(AT_FDCWD, "/usr/share/locale/locale.alias", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=2996, ...}) = 0
read(3, "# Locale name alias data base.\n#"..., 4096) = 2996
read(3, "", 4096)                       = 0
close(3)                                = 0
openat(AT_FDCWD, "/usr/share/locale/en_US.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale/en_US.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale/en_US/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale/en.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale/en.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale/en/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale-langpack/en_US/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale-langpack/en.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale-langpack/en.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
openat(AT_FDCWD, "/usr/share/locale-langpack/en/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
ioctl(2, TCGETS, 0x7ffd46dff9c0)        = -1 ENOTTY (Inappropriate ioctl for device)
ioctl(2, TCGETS, 0x7ffd46dff9d0)        = -1 ENOTTY (Inappropriate ioctl for device)
rt_sigaction(SIGINT, {sa_handler=SIG_IGN, sa_mask=[INT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
rt_sigaction(SIGINT, {sa_handler=0x40a830, sa_mask=[INT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, {sa_handler=SIG_IGN, sa_mask=[INT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, 8) = 0
rt_sigaction(SIGHUP, {sa_handler=SIG_IGN, sa_mask=[HUP], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
rt_sigaction(SIGHUP, {sa_handler=0x40a830, sa_mask=[HUP], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, {sa_handler=SIG_IGN, sa_mask=[HUP], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, 8) = 0
rt_sigaction(SIGTERM, {sa_handler=SIG_IGN, sa_mask=[TERM], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
rt_sigaction(SIGTERM, {sa_handler=0x40a830, sa_mask=[TERM], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, {sa_handler=SIG_IGN, sa_mask=[TERM], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, 8) = 0
rt_sigaction(SIGPIPE, {sa_handler=SIG_IGN, sa_mask=[PIPE], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
rt_sigaction(SIGPIPE, {sa_handler=0x40a830, sa_mask=[PIPE], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, {sa_handler=SIG_IGN, sa_mask=[PIPE], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, 8) = 0
rt_sigaction(SIGCHLD, {sa_handler=SIG_DFL, sa_mask=[CHLD], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f2afb729090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
prlimit64(0, RLIMIT_STACK, NULL, {rlim_cur=8192*1024, rlim_max=RLIM64_INFINITY}) = 0
prlimit64(0, RLIMIT_STACK, {rlim_cur=65536*1024, rlim_max=RLIM64_INFINITY}, NULL) = 0
access("/usr/local/cuda-12.1/bin/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/home/inspur/nfs/wqy/.vscode-server/bin/fdb98833154679dbaa7af67a5a29fe19e55c2b73/bin/remote-cli/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/home/wqy/.local/bin/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/home/wqy/anaconda3/bin/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/home/wqy/anaconda3/condabin/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/usr/local/cuda-12.1/bin/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/usr/local/sbin/gcc", X_OK)     = -1 ENOENT (No such file or directory)
access("/usr/local/bin/gcc", X_OK)      = -1 ENOENT (No such file or directory)
access("/usr/sbin/gcc", X_OK)           = -1 ENOENT (No such file or directory)
access("/usr/bin/gcc", X_OK)            = 0
stat("/usr/bin/gcc", {st_mode=S_IFREG|0755, st_size=1158288, ...}) = 0
lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
lstat("/usr/bin", {st_mode=S_IFDIR|0755, st_size=73728, ...}) = 0
lstat("/usr/bin/gcc", {st_mode=S_IFLNK|0777, st_size=5, ...}) = 0
readlink("/usr/bin/gcc", "gcc-9", 4095) = 5
lstat("/usr/bin/gcc-9", {st_mode=S_IFLNK|0777, st_size=22, ...}) = 0
readlink("/usr/bin/gcc-9", "x86_64-linux-gnu-gcc-9", 4095) = 22
lstat("/usr/bin/x86_64-linux-gnu-gcc-9", {st_mode=S_IFREG|0755, st_size=1158288, ...}) = 0
access("/usr/local/cuda-12.1/bin/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/home/inspur/nfs/wqy/.vscode-server/bin/fdb98833154679dbaa7af67a5a29fe19e55c2b73/bin/remote-cli/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/home/wqy/.local/bin/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/home/wqy/anaconda3/bin/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/home/wqy/anaconda3/condabin/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/usr/local/cuda-12.1/bin/gcc", X_OK) = -1 ENOENT (No such file or directory)
access("/usr/local/sbin/gcc", X_OK)     = -1 ENOENT (No such file or directory)
access("/usr/local/bin/gcc", X_OK)      = -1 ENOENT (No such file or directory)
access("/usr/sbin/gcc", X_OK)           = -1 ENOENT (No such file or directory)
access("/usr/bin/gcc", X_OK)            = 0
stat("/usr/bin/gcc", {st_mode=S_IFREG|0755, st_size=1158288, ...}) = 0
lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
lstat("/usr/bin", {st_mode=S_IFDIR|0755, st_size=73728, ...}) = 0
lstat("/usr/bin/gcc", {st_mode=S_IFLNK|0777, st_size=5, ...}) = 0
readlink("/usr/bin/gcc", "gcc-9", 4095) = 5
lstat("/usr/bin/gcc-9", {st_mode=S_IFLNK|0777, st_size=22, ...}) = 0
readlink("/usr/bin/gcc-9", "x86_64-linux-gnu-gcc-9", 4095) = 22
lstat("/usr/bin/x86_64-linux-gnu-gcc-9", {st_mode=S_IFREG|0755, st_size=1158288, ...}) = 0
access("a.c", F_OK)                     = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/", X_OK) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/", X_OK) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/specs", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/9/specs", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/specs", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/specs", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/", X_OK) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/lto-wrapper", {st_mode=S_IFREG|0755, st_size=1036840, ...}) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/lto-wrapper", X_OK) = 0
access("/tmp", R_OK|W_OK|X_OK)          = 0
getpid()                                = 2383519
openat(AT_FDCWD, "/tmp/ccfYMhUK.s", O_RDWR|O_CREAT|O_EXCL, 0600) = 3
close(3)                                = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/cc1", {st_mode=S_IFREG|0755, st_size=25675096, ...}) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/cc1", X_OK) = 0
pipe2([3, 4], O_CLOEXEC)                = 0
vfork(strace: Process 2383520 attached
 <unfinished ...>
[pid 2383520] close(3)                  = 0
[pid 2383520] execve("/usr/lib/gcc/x86_64-linux-gnu/9/cc1", ["/usr/lib/gcc/x86_64-linux-gnu/9/"..., "-quiet", "-imultiarch", "x86_64-linux-gnu", "a.c", "-quiet", "-dumpbase", "a.c", "-mtune=generic", "-march=x86-64", "-auxbase", "a", "-fasynchronous-unwind-tables", "-fstack-protector-strong", "-Wformat", "-Wformat-security", "-fstack-clash-protection", "-fcf-protection", "-o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */ <unfinished ...>
[pid 2383519] <... vfork resumed>)      = 2383520
[pid 2383519] close(4)                  = 0
[pid 2383519] read(3, "", 16)           = 0
[pid 2383519] close(3 <unfinished ...>
[pid 2383520] <... execve resumed>)     = 0
[pid 2383519] <... close resumed>)      = 0
[pid 2383519] wait4(2383520,  <unfinished ...>
[pid 2383520] brk(NULL)                 = 0x2cbd000
[pid 2383520] arch_prctl(0x3001 /* ARCH_??? */, 0x7fff0747d5a0) = -1 EINVAL (Invalid argument)
[pid 2383520] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc64a535000
[pid 2383520] access("/etc/ld.so.preload", R_OK) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/x86_64", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/tls/haswell/x86_64", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/tls/haswell", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/avx512_1/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/tls/avx512_1/x86_64", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/avx512_1/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/tls/avx512_1", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/tls/x86_64", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/tls", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/avx512_1/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/haswell/avx512_1/x86_64", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/avx512_1/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/haswell/avx512_1", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/haswell/x86_64", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/haswell", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/avx512_1/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/avx512_1/x86_64", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/avx512_1/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/avx512_1", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64/x86_64", 0x7fff0747c7f0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/cuda-12.1/lib64", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "x86_64/libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "libisl.so.22", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=133479, ...}) = 0
[pid 2383520] mmap(NULL, 133479, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7fc64a514000
[pid 2383520] close(3)                  = 0
[pid 2383520] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libisl.so.22", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0`z\4\0\0\0\0\0"..., 832) = 832
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=1773112, ...}) = 0
[pid 2383520] mmap(NULL, 1775064, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fc64a362000
[pid 2383520] mmap(0x7fc64a3a9000, 1093632, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x47000) = 0x7fc64a3a9000
[pid 2383520] mmap(0x7fc64a4b4000, 380928, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x152000) = 0x7fc64a4b4000
[pid 2383520] mmap(0x7fc64a511000, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1ae000) = 0x7fc64a511000
[pid 2383520] close(3)                  = 0
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/x86_64/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/x86_64/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/x86_64/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/x86_64/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/x86_64/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "x86_64/libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "libmpc.so.3", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libmpc.so.3", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0G\0\0\0\0\0\0"..., 832) = 832
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=97360, ...}) = 0
[pid 2383520] mmap(NULL, 2192568, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fc64a14a000
[pid 2383520] mprotect(0x7fc64a161000, 2093056, PROT_NONE) = 0
[pid 2383520] mmap(0x7fc64a360000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x16000) = 0x7fc64a360000
[pid 2383520] close(3)                  = 0
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/x86_64/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/x86_64/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/x86_64/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/x86_64/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/x86_64/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "x86_64/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "libmpfr.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libmpfr.so.6", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0000\247\0\0\0\0\0\0"..., 832) = 832
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=523280, ...}) = 0
[pid 2383520] mmap(NULL, 525216, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fc64a0c9000
[pid 2383520] mmap(0x7fc64a0d3000, 401408, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xa000) = 0x7fc64a0d3000
[pid 2383520] mmap(0x7fc64a135000, 73728, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x6c000) = 0x7fc64a135000
[pid 2383520] mmap(0x7fc64a147000, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x7d000) = 0x7fc64a147000
[pid 2383520] close(3)                  = 0
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/x86_64/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/x86_64/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/x86_64/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/x86_64/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/x86_64/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "x86_64/libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "libgmp.so.10", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libgmp.so.10", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0@\242\0\0\0\0\0\0"..., 832) = 832
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=534880, ...}) = 0
[pid 2383520] mmap(NULL, 537024, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fc64a045000
[pid 2383520] mprotect(0x7fc64a04f000, 491520, PROT_NONE) = 0
[pid 2383520] mmap(0x7fc64a04f000, 393216, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xa000) = 0x7fc64a04f000
[pid 2383520] mmap(0x7fc64a0af000, 94208, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x6a000) = 0x7fc64a0af000
[pid 2383520] mmap(0x7fc64a0c7000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x81000) = 0x7fc64a0c7000
[pid 2383520] close(3)                  = 0
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libdl.so.2", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0 \22\0\0\0\0\0\0"..., 832) = 832
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=18848, ...}) = 0
[pid 2383520] mmap(NULL, 20752, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fc64a03f000
[pid 2383520] mmap(0x7fc64a040000, 8192, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1000) = 0x7fc64a040000
[pid 2383520] mmap(0x7fc64a042000, 4096, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7fc64a042000
[pid 2383520] mmap(0x7fc64a043000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7fc64a043000
[pid 2383520] close(3)                  = 0
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libz.so.1", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\200\"\0\0\0\0\0\0"..., 832) = 832
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=108936, ...}) = 0
[pid 2383520] mmap(NULL, 110776, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fc64a023000
[pid 2383520] mprotect(0x7fc64a025000, 98304, PROT_NONE) = 0
[pid 2383520] mmap(0x7fc64a025000, 69632, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x2000) = 0x7fc64a025000
[pid 2383520] mmap(0x7fc64a036000, 24576, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x13000) = 0x7fc64a036000
[pid 2383520] mmap(0x7fc64a03d000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19000) = 0x7fc64a03d000
[pid 2383520] close(3)                  = 0
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/x86_64/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/x86_64/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/x86_64/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/x86_64/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/x86_64/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "x86_64/libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "libm.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libm.so.6", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300\323\0\0\0\0\0\0"..., 832) = 832
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=1369384, ...}) = 0
[pid 2383520] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc64a021000
[pid 2383520] mmap(NULL, 1368336, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fc649ed2000
[pid 2383520] mmap(0x7fc649edf000, 684032, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xd000) = 0x7fc649edf000
[pid 2383520] mmap(0x7fc649f86000, 626688, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xb4000) = 0x7fc649f86000
[pid 2383520] mmap(0x7fc64a01f000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x14c000) = 0x7fc64a01f000
[pid 2383520] close(3)                  = 0
[pid 2383520] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "tls/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 832) = 832
[pid 2383520] pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
[pid 2383520] pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
[pid 2383520] pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\30x\346\264ur\f|Q\226\236i\253-'o"..., 68, 880) = 68
[pid 2383520] fstat(3, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383520] pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
[pid 2383520] pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
[pid 2383520] pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\30x\346\264ur\f|Q\226\236i\253-'o"..., 68, 880) = 68
[pid 2383520] mmap(NULL, 2037344, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fc649ce0000
[pid 2383520] mmap(0x7fc649d02000, 1540096, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x22000) = 0x7fc649d02000
[pid 2383520] mmap(0x7fc649e7a000, 319488, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19a000) = 0x7fc649e7a000
[pid 2383520] mmap(0x7fc649ec8000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1e7000) = 0x7fc649ec8000
[pid 2383520] mmap(0x7fc649ece000, 13920, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7fc649ece000
[pid 2383520] close(3)                  = 0
[pid 2383520] mmap(NULL, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc649cdd000
[pid 2383520] arch_prctl(ARCH_SET_FS, 0x7fc649cddac0) = 0
[pid 2383520] mprotect(0x7fc649ec8000, 16384, PROT_READ) = 0
[pid 2383520] mprotect(0x7fc64a01f000, 4096, PROT_READ) = 0
[pid 2383520] mprotect(0x7fc64a03d000, 4096, PROT_READ) = 0
[pid 2383520] mprotect(0x7fc64a043000, 4096, PROT_READ) = 0
[pid 2383520] mprotect(0x7fc64a0c7000, 4096, PROT_READ) = 0
[pid 2383520] mprotect(0x7fc64a147000, 8192, PROT_READ) = 0
[pid 2383520] mprotect(0x7fc64a360000, 4096, PROT_READ) = 0
[pid 2383520] mprotect(0x7fc64a511000, 4096, PROT_READ) = 0
[pid 2383520] mprotect(0x1c6e000, 12288, PROT_READ) = 0
[pid 2383520] mprotect(0x7fc64a564000, 4096, PROT_READ) = 0
[pid 2383520] munmap(0x7fc64a514000, 133479) = 0
[pid 2383520] brk(NULL)                 = 0x2cbd000
[pid 2383520] brk(0x2cde000)            = 0x2cde000
[pid 2383520] prlimit64(0, RLIMIT_STACK, NULL, {rlim_cur=65536*1024, rlim_max=RLIM64_INFINITY}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/lib/locale/locale-archive", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=3035952, ...}) = 0
[pid 2383520] mmap(NULL, 3035952, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7fc6499f7000
[pid 2383520] close(3)                  = 0
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale/locale.alias", O_RDONLY|O_CLOEXEC) = 3
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=2996, ...}) = 0
[pid 2383520] read(3, "# Locale name alias data base.\n#"..., 4096) = 2996
[pid 2383520] read(3, "", 4096)         = 0
[pid 2383520] close(3)                  = 0
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale/en_US.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale/en_US.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale/en_US/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale/en.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale/en.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale/en/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale-langpack/en.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale-langpack/en.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/share/locale-langpack/en/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383520] ioctl(2, TCGETS, 0x7fff0747d400) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383520] rt_sigaction(SIGSEGV, {sa_handler=0xa69d50, sa_mask=[SEGV], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7fc649d23090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383520] rt_sigaction(SIGILL, {sa_handler=0xa69d50, sa_mask=[ILL], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7fc649d23090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383520] rt_sigaction(SIGBUS, {sa_handler=0xa69d50, sa_mask=[BUS], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7fc649d23090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383520] rt_sigaction(SIGABRT, {sa_handler=0xa69d50, sa_mask=[ABRT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7fc649d23090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383520] rt_sigaction(SIGFPE, {sa_handler=0xa69d50, sa_mask=[FPE], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7fc649d23090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383520] mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc64a563000
[pid 2383520] mmap(NULL, 135168, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc64a514000
[pid 2383520] brk(0x2d02000)            = 0x2d02000
[pid 2383520] mmap(NULL, 2097152, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497f7000
[pid 2383520] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497f5000
[pid 2383520] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497f3000
[pid 2383520] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497f1000
[pid 2383520] mmap(NULL, 16384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497ed000
[pid 2383520] sysinfo({uptime=3645838, loads=[464000, 348960, 298912], totalram=201385623552, freeram=33715122176, sharedram=25092096, bufferram=4964356096, totalswap=0, freeswap=0, procs=13424, totalhigh=0, freehigh=0, mem_unit=1}) = 0
[pid 2383520] prlimit64(0, RLIMIT_AS, NULL, {rlim_cur=RLIM64_INFINITY, rlim_max=RLIM64_INFINITY}) = 0
[pid 2383520] sysinfo({uptime=3645838, loads=[464000, 348960, 298912], totalram=201385623552, freeram=33715122176, sharedram=25092096, bufferram=4964356096, totalswap=0, freeswap=0, procs=13424, totalhigh=0, freehigh=0, mem_unit=1}) = 0
[pid 2383520] prlimit64(0, RLIMIT_AS, NULL, {rlim_cur=RLIM64_INFINITY, rlim_max=RLIM64_INFINITY}) = 0
[pid 2383520] prlimit64(0, RLIMIT_RSS, NULL, {rlim_cur=RLIM64_INFINITY, rlim_max=RLIM64_INFINITY}) = 0
[pid 2383520] sysinfo({uptime=3645838, loads=[464000, 348960, 298912], totalram=201385623552, freeram=33715122176, sharedram=25092096, bufferram=4964356096, totalswap=0, freeswap=0, procs=13424, totalhigh=0, freehigh=0, mem_unit=1}) = 0
[pid 2383520] prlimit64(0, RLIMIT_AS, NULL, {rlim_cur=RLIM64_INFINITY, rlim_max=RLIM64_INFINITY}) = 0
[pid 2383520] brk(0x2d2a000)            = 0x2d2a000
[pid 2383520] ioctl(2, TCGETS, 0x7fff0747d410) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383520] brk(0x2d51000)            = 0x2d51000
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/x86_64-linux-gnu", 0x7fff0747c330) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include-fixed", 0x7fff0747c330) = -1 ENOENT (No such file or directory)
[pid 2383520] access("/usr/lib/gcc/x86_64-linux-gnu/9/", X_OK) = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/x86_64-linux-gnu", 0x7fff0747c330) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] stat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] stat("/usr/local/include/x86_64-linux-gnu", 0x7fff0747d350) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] stat("/usr/lib/gcc/x86_64-linux-gnu/9/include-fixed", 0x7fff0747d350) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/include", 0x7fff0747d350) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] stat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] stat("a.c.gch", 0x7fff0747d3a0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "a.c", O_RDONLY|O_NOCTTY) = 3
[pid 2383520] fstat(3, {st_mode=S_IFREG|0644, st_size=63, ...}) = 0
[pid 2383520] read(3, "#include <stdio.h>\nint main()\n{\n"..., 63) = 63
[pid 2383520] close(3)                  = 0
[pid 2383520] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497eb000
[pid 2383520] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497e9000
[pid 2383520] brk(0x2d7a000)            = 0x2d7a000
[pid 2383520] lstat("/tmp", {st_mode=S_IFDIR|S_ISVTX|0777, st_size=516096, ...}) = 0
[pid 2383520] lstat("/tmp/ccfYMhUK.s", {st_mode=S_IFREG|0600, st_size=0, ...}) = 0
[pid 2383520] getcwd("/home/inspur/nfs/wqy/OS_teaching/Overview/strace", 4096) = 49
[pid 2383520] lstat("/home/inspur/nfs/wqy/OS_teaching/Overview/strace/a.c", {st_mode=S_IFREG|0644, st_size=63, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/tmp/ccfYMhUK.s", O_WRONLY|O_CREAT|O_TRUNC, 0666) = 3
[pid 2383520] fstat(3, {st_mode=S_IFREG|0600, st_size=0, ...}) = 0
[pid 2383520] stat("/home/wqy/OS_teaching/Overview/strace", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] stat(".", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/stdc-predef.h", 0x7fff0747c220) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/lib/gcc/x86_64-linux-gnu/9/include/stdc-predef.h.gch", 0x7fff0747d360) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdc-predef.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/stdc-predef.h", 0x7fff0747c220) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/include/stdc-predef.h.gch", 0x7fff0747d360) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/stdc-predef.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/stdc-predef.h", 0x7fff0747c220) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/include/x86_64-linux-gnu/stdc-predef.h.gch", 0x7fff0747d360) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/stdc-predef.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/stdc-predef.h", {st_mode=S_IFREG|0644, st_size=2290, ...}) = 0
[pid 2383520] stat("/usr/include/stdc-predef.h.gch", 0x7fff0747d360) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/include/stdc-predef.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=2290, ...}) = 0
[pid 2383520] read(4, "/* Copyright (C) 1991-2020 Free "..., 2290) = 2290
[pid 2383520] close(4)                  = 0
[pid 2383520] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497e7000
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/stdio.h", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/lib/gcc/x86_64-linux-gnu/9/include/stdio.h.gch", 0x7fff0747cfe0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdio.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/stdio.h", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/local/include/stdio.h.gch", 0x7fff0747cfe0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/stdio.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/stdio.h", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] stat("/usr/include/x86_64-linux-gnu/stdio.h.gch", 0x7fff0747cfe0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/stdio.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/stdio.h", {st_mode=S_IFREG|0644, st_size=29950, ...}) = 0
[pid 2383520] stat("/usr/include/stdio.h.gch", 0x7fff0747cfe0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/include/stdio.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=29950, ...}) = 0
[pid 2383520] read(4, "/* Define ISO C stdio on top of "..., 29950) = 29950
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/libc-header-start.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/libc-header-start.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/libc-header-start.h", {st_mode=S_IFREG|0644, st_size=3288, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=3288, ...}) = 0
[pid 2383520] read(4, "/* Handle feature test macros at"..., 3288) = 3288
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/features.h", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/features.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/features.h", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/features.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/features.h", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/features.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/features.h", {st_mode=S_IFREG|0644, st_size=17079, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/features.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=17079, ...}) = 0
[pid 2383520] read(4, "/* Copyright (C) 1991-2020 Free "..., 17079) = 17079
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/sys", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/sys/cdefs.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/sys", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/sys/cdefs.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/sys", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/sys/cdefs.h", {st_mode=S_IFREG|0644, st_size=18308, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/sys/cdefs.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=18308, ...}) = 0
[pid 2383520] read(4, "/* Copyright (C) 1992-2020 Free "..., 18308) = 18308
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/wordsize.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/wordsize.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/wordsize.h", {st_mode=S_IFREG|0644, st_size=442, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/wordsize.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=442, ...}) = 0
[pid 2383520] read(4, "/* Determine the wordsize from t"..., 442) = 442
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/long-double.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/long-double.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/long-double.h", {st_mode=S_IFREG|0644, st_size=962, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/long-double.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=962, ...}) = 0
[pid 2383520] read(4, "/* Properties of long double typ"..., 962) = 962
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/gnu", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/gnu/stubs.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/gnu", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/gnu/stubs.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/gnu/stubs.h", {st_mode=S_IFREG|0644, st_size=384, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/gnu/stubs.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=384, ...}) = 0
[pid 2383520] read(4, "/* This file is automatically ge"..., 384) = 384
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/gnu", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/gnu/stubs-64.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/gnu", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/gnu/stubs-64.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/gnu/stubs-64.h", {st_mode=S_IFREG|0644, st_size=523, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=523, ...}) = 0
[pid 2383520] read(4, "/* This file is automatically ge"..., 523) = 523
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h", {st_mode=S_IFREG|0644, st_size=12959, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=12959, ...}) = 0
[pid 2383520] read(4, "/* Copyright (C) 1989-2019 Free "..., 12959) = 12959
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h", {st_mode=S_IFREG|0644, st_size=4072, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/stdarg.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=4072, ...}) = 0
[pid 2383520] read(4, "/* Copyright (C) 1989-2019 Free "..., 4072) = 4072
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/types.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/types.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types.h", {st_mode=S_IFREG|0644, st_size=8757, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/types.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=8757, ...}) = 0
[pid 2383520] read(4, "/* bits/types.h -- definitions o"..., 8757) = 8757
[pid 2383520] close(4)                  = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/wordsize.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=442, ...}) = 0
[pid 2383520] read(4, "/* Determine the wordsize from t"..., 442) = 442
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/timesize.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/timesize.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/timesize.h", {st_mode=S_IFREG|0644, st_size=1081, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/timesize.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=1081, ...}) = 0
[pid 2383520] read(4, "/* Bit size of the time_t type a"..., 1081) = 1081
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/typesizes.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/typesizes.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/typesizes.h", {st_mode=S_IFREG|0644, st_size=3546, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/typesizes.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=3546, ...}) = 0
[pid 2383520] read(4, "/* bits/typesizes.h -- underlyin"..., 3546) = 3546
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/time64.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/time64.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/time64.h", {st_mode=S_IFREG|0644, st_size=1340, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/time64.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=1340, ...}) = 0
[pid 2383520] read(4, "/* bits/time64.h -- underlying t"..., 1340) = 1340
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/types/__fpos_t.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/types/__fpos_t.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h", {st_mode=S_IFREG|0644, st_size=381, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=381, ...}) = 0
[pid 2383520] read(4, "#ifndef _____fpos_t_defined\n#def"..., 381) = 381
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/types/__mbstate_t.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/types/__mbstate_t.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h", {st_mode=S_IFREG|0644, st_size=564, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=564, ...}) = 0
[pid 2383520] read(4, "#ifndef ____mbstate_t_defined\n#d"..., 564) = 564
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/types/__fpos64_t.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/types/__fpos64_t.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h", {st_mode=S_IFREG|0644, st_size=410, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=410, ...}) = 0
[pid 2383520] read(4, "#ifndef _____fpos64_t_defined\n#d"..., 410) = 410
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/types/__FILE.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/types/__FILE.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types/__FILE.h", {st_mode=S_IFREG|0644, st_size=110, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=110, ...}) = 0
[pid 2383520] read(4, "#ifndef ____FILE_defined\n#define"..., 110) = 110
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/types/FILE.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/types/FILE.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types/FILE.h", {st_mode=S_IFREG|0644, st_size=180, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/types/FILE.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=180, ...}) = 0
[pid 2383520] read(4, "#ifndef __FILE_defined\n#define _"..., 180) = 180
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/types/struct_FILE.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/types/struct_FILE.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h", {st_mode=S_IFREG|0644, st_size=4104, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=4104, ...}) = 0
[pid 2383520] read(4, "/* Copyright (C) 1991-2020 Free "..., 4104) = 4104
[pid 2383520] close(4)                  = 0
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/stdio_lim.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/stdio_lim.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/stdio_lim.h", {st_mode=S_IFREG|0644, st_size=1213, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=1213, ...}) = 0
[pid 2383520] read(4, "/* Copyright (C) 1994-2020 Free "..., 1213) = 1213
[pid 2383520] close(4)                  = 0
[pid 2383520] mmap(NULL, 16384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497e3000
[pid 2383520] brk(0x2da3000)            = 0x2da3000
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include", {st_mode=S_IFDIR|0755, st_size=16384, ...}) = 0
[pid 2383520] lstat("/usr/lib/gcc/x86_64-linux-gnu/9/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/include/bits/sys_errlist.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/local/include/bits", 0x7fff0747bea0) = -1 ENOENT (No such file or directory)
[pid 2383520] openat(AT_FDCWD, "/usr/local/include/bits/sys_errlist.h", O_RDONLY|O_NOCTTY) = -1 ENOENT (No such file or directory)
[pid 2383520] lstat("/usr", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383520] lstat("/usr/include/x86_64-linux-gnu/bits/sys_errlist.h", {st_mode=S_IFREG|0644, st_size=1216, ...}) = 0
[pid 2383520] openat(AT_FDCWD, "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h", O_RDONLY|O_NOCTTY) = 4
[pid 2383520] fstat(4, {st_mode=S_IFREG|0644, st_size=1216, ...}) = 0
[pid 2383520] read(4, "/* Declare sys_errlist and sys_n"..., 1216) = 1216
[pid 2383520] close(4)                  = 0
[pid 2383520] mmap(NULL, 16384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497df000
[pid 2383520] brk(0x2dd3000)            = 0x2dd3000
[pid 2383520] brk(0x2df4000)            = 0x2df4000
[pid 2383520] brk(0x2e17000)            = 0x2e17000
[pid 2383520] brk(0x2e38000)            = 0x2e38000
[pid 2383520] brk(0x2e59000)            = 0x2e59000
[pid 2383520] brk(0x2e7b000)            = 0x2e7b000
[pid 2383520] brk(0x2e9c000)            = 0x2e9c000
[pid 2383520] brk(0x2e9b000)            = 0x2e9b000
[pid 2383520] mmap(NULL, 16384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fc6497db000
[pid 2383520] brk(0x2ebe000)            = 0x2ebe000
[pid 2383520] write(3, "\t.file\t\"a.c\"\n\t.text\n\t.section\t.r"..., 661) = 661
[pid 2383520] close(3)                  = 0
[pid 2383520] exit_group(0)             = ?
[pid 2383520] +++ exited with 0 +++
<... wait4 resumed>[{WIFEXITED(s) && WEXITSTATUS(s) == 0}], 0, NULL) = 2383520
--- SIGCHLD {si_signo=SIGCHLD, si_code=CLD_EXITED, si_pid=2383520, si_uid=1005, si_status=0, si_utime=4, si_stime=2} ---
getpid()                                = 2383519
openat(AT_FDCWD, "/tmp/ccW5PG7J.o", O_RDWR|O_CREAT|O_EXCL, 0600) = 3
close(3)                                = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/x86_64-linux-gnu-as", 0x7ffd46dff6d0) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/as", 0x7ffd46dff720) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/x86_64-linux-gnu-as", 0x7ffd46dff6d0) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/as", 0x7ffd46dff720) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/x86_64-linux-gnu-as", 0x7ffd46dff6d0) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/as", 0x7ffd46dff720) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/x86_64-linux-gnu-as", 0x7ffd46dff6d0) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/as", 0x7ffd46dff720) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/x86_64-linux-gnu-as", 0x7ffd46dff6d0) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/as", 0x7ffd46dff720) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/bin/x86_64-linux-gnu/9/x86_64-linux-gnu-as", 0x7ffd46dff6d0) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/bin/x86_64-linux-gnu/9/as", 0x7ffd46dff720) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/bin/x86_64-linux-gnu/x86_64-linux-gnu-as", 0x7ffd46dff6d0) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/bin/x86_64-linux-gnu/as", 0x7ffd46dff720) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/bin/x86_64-linux-gnu-as", 0x7ffd46dff6d0) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/bin/as", 0x7ffd46dff720) = -1 ENOENT (No such file or directory)
pipe2([3, 4], O_CLOEXEC)                = 0
vfork(strace: Process 2383521 attached
 <unfinished ...>
[pid 2383521] close(3)                  = 0
[pid 2383521] execve("/usr/local/cuda-12.1/bin/as", ["as", "--64", "-o", "/tmp/ccW5PG7J.o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */) = -1 ENOENT (No such file or directory)
[pid 2383521] execve("/home/inspur/nfs/wqy/.vscode-server/bin/fdb98833154679dbaa7af67a5a29fe19e55c2b73/bin/remote-cli/as", ["as", "--64", "-o", "/tmp/ccW5PG7J.o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */) = -1 ENOENT (No such file or directory)
[pid 2383521] execve("/home/wqy/.local/bin/as", ["as", "--64", "-o", "/tmp/ccW5PG7J.o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */) = -1 ENOENT (No such file or directory)
[pid 2383521] execve("/home/wqy/anaconda3/bin/as", ["as", "--64", "-o", "/tmp/ccW5PG7J.o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */) = -1 ENOENT (No such file or directory)
[pid 2383521] execve("/home/wqy/anaconda3/condabin/as", ["as", "--64", "-o", "/tmp/ccW5PG7J.o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */) = -1 ENOENT (No such file or directory)
[pid 2383521] execve("/usr/local/cuda-12.1/bin/as", ["as", "--64", "-o", "/tmp/ccW5PG7J.o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */) = -1 ENOENT (No such file or directory)
[pid 2383521] execve("/usr/local/sbin/as", ["as", "--64", "-o", "/tmp/ccW5PG7J.o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */) = -1 ENOENT (No such file or directory)
[pid 2383521] execve("/usr/local/bin/as", ["as", "--64", "-o", "/tmp/ccW5PG7J.o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */) = -1 ENOENT (No such file or directory)
[pid 2383521] execve("/usr/sbin/as", ["as", "--64", "-o", "/tmp/ccW5PG7J.o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */) = -1 ENOENT (No such file or directory)
[pid 2383521] execve("/usr/bin/as", ["as", "--64", "-o", "/tmp/ccW5PG7J.o", "/tmp/ccfYMhUK.s"], 0xb897d0 /* 55 vars */ <unfinished ...>
[pid 2383519] <... vfork resumed>)      = 2383521
[pid 2383519] close(4)                  = 0
[pid 2383519] read(3, "", 16)           = 0
[pid 2383521] <... execve resumed>)     = 0
[pid 2383519] close(3)                  = 0
[pid 2383519] wait4(2383521,  <unfinished ...>
[pid 2383521] brk(NULL)                 = 0x56400d9ff000
[pid 2383521] arch_prctl(0x3001 /* ARCH_??? */, 0x7ffd3b8ca520) = -1 EINVAL (Invalid argument)
[pid 2383521] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fe1ea2ab000
[pid 2383521] access("/etc/ld.so.preload", R_OK) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/x86_64", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/tls/haswell/x86_64", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/tls/haswell", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/avx512_1/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/tls/avx512_1/x86_64", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/avx512_1/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/tls/avx512_1", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/tls/x86_64", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/tls", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/avx512_1/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/haswell/avx512_1/x86_64", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/avx512_1/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/haswell/avx512_1", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/haswell/x86_64", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/haswell", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/avx512_1/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/avx512_1/x86_64", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/avx512_1/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/avx512_1", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64/x86_64", 0x7ffd3b8c9770) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] stat("/usr/local/cuda-12.1/lib64", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383521] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/avx512_1/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/avx512_1/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/avx512_1/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/avx512_1/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "avx512_1/x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "avx512_1/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "x86_64/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
[pid 2383521] fstat(3, {st_mode=S_IFREG|0644, st_size=133479, ...}) = 0
[pid 2383521] mmap(NULL, 133479, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7fe1ea28a000
[pid 2383521] close(3)                  = 0
[pid 2383521] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libopcodes-2.34-system.so", O_RDONLY|O_CLOEXEC) = 3
[pid 2383521] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0 R\4\0\0\0\0\0"..., 832) = 832
[pid 2383521] fstat(3, {st_mode=S_IFREG|0644, st_size=1426976, ...}) = 0
[pid 2383521] mmap(NULL, 1430208, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fe1ea12c000
[pid 2383521] mprotect(0x7fe1ea171000, 155648, PROT_NONE) = 0
[pid 2383521] mmap(0x7fe1ea171000, 45056, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x45000) = 0x7fe1ea171000
[pid 2383521] mmap(0x7fe1ea17c000, 106496, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x50000) = 0x7fe1ea17c000
[pid 2383521] mmap(0x7fe1ea197000, 991232, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x6a000) = 0x7fe1ea197000
[pid 2383521] mmap(0x7fe1ea289000, 704, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7fe1ea289000
[pid 2383521] close(3)                  = 0
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = 3
[pid 2383521] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0000^\4\0\0\0\0\0"..., 832) = 832
[pid 2383521] fstat(3, {st_mode=S_IFREG|0644, st_size=1319320, ...}) = 0
[pid 2383521] mmap(NULL, 1338944, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fe1e9fe5000
[pid 2383521] mmap(0x7fe1ea027000, 724992, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x42000) = 0x7fe1ea027000
[pid 2383521] mmap(0x7fe1ea0d8000, 225280, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xf3000) = 0x7fe1ea0d8000
[pid 2383521] mmap(0x7fe1ea10f000, 102400, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x129000) = 0x7fe1ea10f000
[pid 2383521] mmap(0x7fe1ea128000, 15936, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7fe1ea128000
[pid 2383521] close(3)                  = 0
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libz.so.1", O_RDONLY|O_CLOEXEC) = 3
[pid 2383521] read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\200\"\0\0\0\0\0\0"..., 832) = 832
[pid 2383521] fstat(3, {st_mode=S_IFREG|0644, st_size=108936, ...}) = 0
[pid 2383521] mmap(NULL, 110776, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fe1e9fc9000
[pid 2383521] mprotect(0x7fe1e9fcb000, 98304, PROT_NONE) = 0
[pid 2383521] mmap(0x7fe1e9fcb000, 69632, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x2000) = 0x7fe1e9fcb000
[pid 2383521] mmap(0x7fe1e9fdc000, 24576, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x13000) = 0x7fe1e9fdc000
[pid 2383521] mmap(0x7fe1e9fe3000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19000) = 0x7fe1e9fe3000
[pid 2383521] close(3)                  = 0
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
[pid 2383521] read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 832) = 832
[pid 2383521] pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
[pid 2383521] pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
[pid 2383521] pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\30x\346\264ur\f|Q\226\236i\253-'o"..., 68, 880) = 68
[pid 2383521] fstat(3, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383521] pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
[pid 2383521] pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
[pid 2383521] pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\30x\346\264ur\f|Q\226\236i\253-'o"..., 68, 880) = 68
[pid 2383521] mmap(NULL, 2037344, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fe1e9dd7000
[pid 2383521] mmap(0x7fe1e9df9000, 1540096, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x22000) = 0x7fe1e9df9000
[pid 2383521] mmap(0x7fe1e9f71000, 319488, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19a000) = 0x7fe1e9f71000
[pid 2383521] mmap(0x7fe1e9fbf000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1e7000) = 0x7fe1e9fbf000
[pid 2383521] mmap(0x7fe1e9fc5000, 13920, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7fe1e9fc5000
[pid 2383521] close(3)                  = 0
[pid 2383521] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/haswell/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "tls/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "haswell/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libdl.so.2", O_RDONLY|O_CLOEXEC) = 3
[pid 2383521] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0 \22\0\0\0\0\0\0"..., 832) = 832
[pid 2383521] fstat(3, {st_mode=S_IFREG|0644, st_size=18848, ...}) = 0
[pid 2383521] mmap(NULL, 20752, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7fe1e9dd1000
[pid 2383521] mmap(0x7fe1e9dd2000, 8192, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1000) = 0x7fe1e9dd2000
[pid 2383521] mmap(0x7fe1e9dd4000, 4096, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7fe1e9dd4000
[pid 2383521] mmap(0x7fe1e9dd5000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7fe1e9dd5000
[pid 2383521] close(3)                  = 0
[pid 2383521] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fe1e9dcf000
[pid 2383521] arch_prctl(ARCH_SET_FS, 0x7fe1e9dd0200) = 0
[pid 2383521] mprotect(0x7fe1e9fbf000, 16384, PROT_READ) = 0
[pid 2383521] mprotect(0x7fe1e9dd5000, 4096, PROT_READ) = 0
[pid 2383521] mprotect(0x7fe1e9fe3000, 4096, PROT_READ) = 0
[pid 2383521] mprotect(0x7fe1ea10f000, 73728, PROT_READ) = 0
[pid 2383521] mprotect(0x7fe1ea197000, 987136, PROT_READ) = 0
[pid 2383521] mprotect(0x56400ccb9000, 278528, PROT_READ) = 0
[pid 2383521] mprotect(0x7fe1ea2da000, 4096, PROT_READ) = 0
[pid 2383521] munmap(0x7fe1ea28a000, 133479) = 0
[pid 2383521] getrusage(RUSAGE_SELF, {ru_utime={tv_sec=0, tv_usec=4130}, ru_stime={tv_sec=0, tv_usec=4130}, ...}) = 0
[pid 2383521] rt_sigaction(SIGSEGV, {sa_handler=0x56400cc734c0, sa_mask=[SEGV], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7fe1e9e1a090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383521] rt_sigaction(SIGILL, {sa_handler=0x56400cc734c0, sa_mask=[ILL], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7fe1e9e1a090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383521] rt_sigaction(SIGBUS, {sa_handler=0x56400cc734c0, sa_mask=[BUS], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7fe1e9e1a090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383521] rt_sigaction(SIGABRT, {sa_handler=0x56400cc734c0, sa_mask=[ABRT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7fe1e9e1a090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383521] rt_sigaction(SIGFPE, {sa_handler=0x56400cc734c0, sa_mask=[FPE], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7fe1e9e1a090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383521] brk(NULL)                 = 0x56400d9ff000
[pid 2383521] brk(0x56400da20000)       = 0x56400da20000
[pid 2383521] openat(AT_FDCWD, "/usr/lib/locale/locale-archive", O_RDONLY|O_CLOEXEC) = 3
[pid 2383521] fstat(3, {st_mode=S_IFREG|0644, st_size=3035952, ...}) = 0
[pid 2383521] mmap(NULL, 3035952, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7fe1e9ae9000
[pid 2383521] close(3)                  = 0
[pid 2383521] stat("/tmp/ccW5PG7J.o", {st_mode=S_IFREG|0600, st_size=0, ...}) = 0
[pid 2383521] stat("/tmp/ccfYMhUK.s", {st_mode=S_IFREG|0600, st_size=661, ...}) = 0
[pid 2383521] mmap(NULL, 528384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fe1e9a68000
[pid 2383521] mmap(NULL, 528384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fe1e99e7000
[pid 2383521] mmap(NULL, 528384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fe1e9966000
[pid 2383521] mmap(NULL, 528384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fe1e98e5000
[pid 2383521] prlimit64(0, RLIMIT_NOFILE, NULL, {rlim_cur=1024*1024, rlim_max=1024*1024}) = 0
[pid 2383521] stat("/tmp/ccW5PG7J.o", {st_mode=S_IFREG|0600, st_size=0, ...}) = 0
[pid 2383521] openat(AT_FDCWD, "/tmp/ccW5PG7J.o", O_RDWR|O_CREAT|O_TRUNC, 0666) = 3
[pid 2383521] fcntl(3, F_GETFD)         = 0
[pid 2383521] fcntl(3, F_SETFD, FD_CLOEXEC) = 0
[pid 2383521] brk(0x56400da41000)       = 0x56400da41000
[pid 2383521] mmap(NULL, 528384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fe1e9864000
[pid 2383521] brk(0x56400da40000)       = 0x56400da40000
[pid 2383521] brk(0x56400da61000)       = 0x56400da61000
[pid 2383521] mmap(NULL, 528384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fe1e97e3000
[pid 2383521] brk(0x56400da60000)       = 0x56400da60000
[pid 2383521] openat(AT_FDCWD, "/tmp/ccfYMhUK.s", O_RDONLY) = 4
[pid 2383521] fstat(4, {st_mode=S_IFREG|0600, st_size=661, ...}) = 0
[pid 2383521] read(4, "\t.file\t\"a.c\"\n\t.text\n\t.section\t.r"..., 4096) = 661
[pid 2383521] read(4, "", 28672)        = 0
[pid 2383521] close(4)                  = 0
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale/locale.alias", O_RDONLY|O_CLOEXEC) = 4
[pid 2383521] fstat(4, {st_mode=S_IFREG|0644, st_size=2996, ...}) = 0
[pid 2383521] read(4, "# Locale name alias data base.\n#"..., 4096) = 2996
[pid 2383521] read(4, "", 4096)         = 0
[pid 2383521] close(4)                  = 0
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale/en_US.UTF-8/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale/en_US.utf8/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale/en_US/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale/en.UTF-8/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale/en.utf8/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale/en/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.UTF-8/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.utf8/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale-langpack/en.UTF-8/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale-langpack/en.utf8/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] openat(AT_FDCWD, "/usr/share/locale-langpack/en/LC_MESSAGES/gas.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383521] mmap(NULL, 528384, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7fe1e9762000
[pid 2383521] munmap(0x7fe1e9762000, 528384) = 0
[pid 2383521] fstat(3, {st_mode=S_IFREG|0600, st_size=0, ...}) = 0
[pid 2383521] brk(0x56400da81000)       = 0x56400da81000
[pid 2383521] lseek(3, 0, SEEK_SET)     = 0
[pid 2383521] read(3, "", 552)          = 0
[pid 2383521] lseek(3, 552, SEEK_CUR)   = 552
[pid 2383521] write(3, "\0a.c\0main\0_GLOBAL_OFFSET_TABLE_\0"..., 39) = 39
[pid 2383521] lseek(3, 0, SEEK_SET)     = 0
[pid 2383521] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 591
[pid 2383521] lseek(3, -527, SEEK_CUR)  = 64
[pid 2383521] write(3, "\363\17\36\372UH\211\345H\215=\0\0\0\0\270\0\0\0\0\350\0\0\0\0\270\0\0\0\0]\303"..., 82) = 82
[pid 2383521] lseek(3, 0, SEEK_SET)     = 0
[pid 2383521] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 591
[pid 2383521] lseek(3, -439, SEEK_CUR)  = 152
[pid 2383521] write(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0"..., 88) = 88
[pid 2383521] lseek(3, 0, SEEK_SET)     = 0
[pid 2383521] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 591
[pid 2383521] lseek(3, 1, SEEK_CUR)     = 592
[pid 2383521] write(3, "\v\0\0\0\0\0\0\0\2\0\0\0\5\0\0\0\374\377\377\377\377\377\377\377\25\0\0\0\0\0\0\0"..., 72) = 72
[pid 2383521] lseek(3, 0, SEEK_SET)     = 0
[pid 2383521] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 664
[pid 2383521] lseek(3, -424, SEEK_CUR)  = 240
[pid 2383521] write(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\0\0\0\4\0\361\377"..., 312) = 312
[pid 2383521] lseek(3, 0, SEEK_SET)     = 0
[pid 2383521] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 664
[pid 2383521] write(3, "\0.symtab\0.strtab\0.shstrtab\0.rela"..., 116) = 116
[pid 2383521] lseek(3, 0, SEEK_SET)     = 0
[pid 2383521] write(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 64) = 64
[pid 2383521] lseek(3, 0, SEEK_SET)     = 0
[pid 2383521] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 780
[pid 2383521] lseek(3, 4, SEEK_CUR)     = 784
[pid 2383521] write(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 896) = 896
[pid 2383521] close(3)                  = 0
[pid 2383521] exit_group(0)             = ?
[pid 2383521] +++ exited with 0 +++
<... wait4 resumed>[{WIFEXITED(s) && WEXITSTATUS(s) == 0}], 0, NULL) = 2383521
--- SIGCHLD {si_signo=SIGCHLD, si_code=CLD_EXITED, si_pid=2383521, si_uid=1005, si_status=0, si_utime=0, si_stime=0} ---
stat("/usr/lib/gcc/x86_64-linux-gnu/9/collect2", {st_mode=S_IFREG|0755, st_size=622960, ...}) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/collect2", X_OK) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/liblto_plugin.so", R_OK) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/.", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/.", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/.", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/.", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/.", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/bin/x86_64-linux-gnu/9/.", 0x7ffd46dff870) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/bin/x86_64-linux-gnu/.", 0x7ffd46dff870) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/bin/.", 0x7ffd46dff870) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/.", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/9/.", 0x7ffd46dff870) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/.", 0x7ffd46dff870) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/../lib/.", 0x7ffd46dff870) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/9/.", 0x7ffd46dff870) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/.", {st_mode=S_IFDIR|0755, st_size=118784, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../lib/.", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
stat("/lib/x86_64-linux-gnu/9/.", 0x7ffd46dff870) = -1 ENOENT (No such file or directory)
stat("/lib/x86_64-linux-gnu/.", {st_mode=S_IFDIR|0755, st_size=118784, ...}) = 0
stat("/lib/../lib/.", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
stat("/usr/lib/x86_64-linux-gnu/9/.", 0x7ffd46dff870) = -1 ENOENT (No such file or directory)
stat("/usr/lib/x86_64-linux-gnu/.", {st_mode=S_IFDIR|0755, st_size=118784, ...}) = 0
stat("/usr/lib/../lib/.", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/.", 0x7ffd46dff870) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../.", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
stat("/lib/.", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
stat("/usr/lib/.", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
getpid()                                = 2383519
openat(AT_FDCWD, "/tmp/cc9LRRnJ.res", O_RDWR|O_CREAT|O_EXCL, 0600) = 3
close(3)                                = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/Scrt1.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/9/Scrt1.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/Scrt1.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/../lib/Scrt1.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/9/Scrt1.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o", R_OK) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/crti.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/9/crti.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/crti.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/../lib/crti.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/9/crti.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/crti.o", R_OK) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/crtbeginS.o", R_OK) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/.", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/9/.", 0x7ffd46dfeb30) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/.", 0x7ffd46dfeb30) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/../lib/.", 0x7ffd46dfeb30) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/9/.", 0x7ffd46dfeb30) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/.", {st_mode=S_IFDIR|0755, st_size=118784, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../lib/.", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
stat("/lib/x86_64-linux-gnu/9/.", 0x7ffd46dfeb30) = -1 ENOENT (No such file or directory)
stat("/lib/x86_64-linux-gnu/.", {st_mode=S_IFDIR|0755, st_size=118784, ...}) = 0
stat("/lib/../lib/.", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
stat("/usr/lib/x86_64-linux-gnu/9/.", 0x7ffd46dfeb30) = -1 ENOENT (No such file or directory)
stat("/usr/lib/x86_64-linux-gnu/.", {st_mode=S_IFDIR|0755, st_size=118784, ...}) = 0
stat("/usr/lib/../lib/.", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/.", 0x7ffd46dfeb30) = -1 ENOENT (No such file or directory)
stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../.", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/crtendS.o", R_OK) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/crtn.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/9/crtn.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/x86_64-linux-gnu/crtn.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../../x86_64-linux-gnu/lib/../lib/crtn.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/9/crtn.o", R_OK) = -1 ENOENT (No such file or directory)
access("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/crtn.o", R_OK) = 0
stat("/usr/lib/gcc/x86_64-linux-gnu/9/collect2", {st_mode=S_IFREG|0755, st_size=622960, ...}) = 0
access("/usr/lib/gcc/x86_64-linux-gnu/9/collect2", X_OK) = 0
pipe2([3, 4], O_CLOEXEC)                = 0
vfork(strace: Process 2383522 attached
 <unfinished ...>
[pid 2383522] close(3)                  = 0
[pid 2383522] execve("/usr/lib/gcc/x86_64-linux-gnu/9/collect2", ["/usr/lib/gcc/x86_64-linux-gnu/9/"..., "-plugin", "/usr/lib/gcc/x86_64-linux-gnu/9/"..., "-plugin-opt=/usr/lib/gcc/x86_64-"..., "-plugin-opt=-fresolution=/tmp/cc"..., "-plugin-opt=-pass-through=-lgcc", "-plugin-opt=-pass-through=-lgcc_"..., "-plugin-opt=-pass-through=-lc", "-plugin-opt=-pass-through=-lgcc", "-plugin-opt=-pass-through=-lgcc_"..., "--build-id", "--eh-frame-hdr", "-m", "elf_x86_64", "--hash-style=gnu", "--as-needed", "-dynamic-linker", "/lib64/ld-linux-x86-64.so.2", "-pie", "-z", "now", "-z", "relro", "/usr/lib/gcc/x86_64-linux-gnu/9/"..., "/usr/lib/gcc/x86_64-linux-gnu/9/"..., "/usr/lib/gcc/x86_64-linux-gnu/9/"..., "-L/usr/lib/gcc/x86_64-linux-gnu/"..., "-L/usr/lib/gcc/x86_64-linux-gnu/"..., "-L/usr/lib/gcc/x86_64-linux-gnu/"..., "-L/lib/x86_64-linux-gnu", "-L/lib/../lib", "-L/usr/lib/x86_64-linux-gnu", ...], 0xb89c50 /* 57 vars */ <unfinished ...>
[pid 2383519] <... vfork resumed>)      = 2383522
[pid 2383519] close(4)                  = 0
[pid 2383519] read(3, "", 16)           = 0
[pid 2383522] <... execve resumed>)     = 0
[pid 2383519] close(3)                  = 0
[pid 2383522] brk(NULL <unfinished ...>
[pid 2383519] wait4(2383522,  <unfinished ...>
[pid 2383522] <... brk resumed>)        = 0x1b98000
[pid 2383522] arch_prctl(0x3001 /* ARCH_??? */, 0x7ffcf1438b40) = -1 EINVAL (Invalid argument)
[pid 2383522] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f09ddbfc000
[pid 2383522] access("/etc/ld.so.preload", R_OK) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/x86_64", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/tls/haswell/x86_64", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/tls/haswell", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/tls/avx512_1/x86_64", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/tls/avx512_1", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/tls/x86_64", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/tls", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/haswell/avx512_1/x86_64", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/haswell/avx512_1", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/haswell/x86_64", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/haswell", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/avx512_1/x86_64", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/avx512_1", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64/x86_64", 0x7ffcf1437d90) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/lib64", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383522] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "tls/haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "tls/haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "tls/haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "tls/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "tls/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "tls/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "tls/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
[pid 2383522] fstat(3, {st_mode=S_IFREG|0644, st_size=133479, ...}) = 0
[pid 2383522] mmap(NULL, 133479, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f09ddbdb000
[pid 2383522] close(3)                  = 0
[pid 2383522] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
[pid 2383522] read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 832) = 832
[pid 2383522] pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
[pid 2383522] pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
[pid 2383522] pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\30x\346\264ur\f|Q\226\236i\253-'o"..., 68, 880) = 68
[pid 2383522] fstat(3, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383522] pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
[pid 2383522] pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
[pid 2383522] pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\30x\346\264ur\f|Q\226\236i\253-'o"..., 68, 880) = 68
[pid 2383522] mmap(NULL, 2037344, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f09dd9e9000
[pid 2383522] mmap(0x7f09dda0b000, 1540096, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x22000) = 0x7f09dda0b000
[pid 2383522] mmap(0x7f09ddb83000, 319488, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19a000) = 0x7f09ddb83000
[pid 2383522] mmap(0x7f09ddbd1000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1e7000) = 0x7f09ddbd1000
[pid 2383522] mmap(0x7f09ddbd7000, 13920, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f09ddbd7000
[pid 2383522] close(3)                  = 0
[pid 2383522] mmap(NULL, 12288, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f09dd9e6000
[pid 2383522] arch_prctl(ARCH_SET_FS, 0x7f09dd9e6740) = 0
[pid 2383522] mprotect(0x7f09ddbd1000, 16384, PROT_READ) = 0
[pid 2383522] mprotect(0x495000, 12288, PROT_READ) = 0
[pid 2383522] mprotect(0x7f09ddc2b000, 4096, PROT_READ) = 0
[pid 2383522] munmap(0x7f09ddbdb000, 133479) = 0
[pid 2383522] brk(NULL)                 = 0x1b98000
[pid 2383522] brk(0x1bb9000)            = 0x1bb9000
[pid 2383522] rt_sigaction(SIGCHLD, {sa_handler=SIG_DFL, sa_mask=[CHLD], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383522] openat(AT_FDCWD, "/usr/lib/locale/locale-archive", O_RDONLY|O_CLOEXEC) = 3
[pid 2383522] fstat(3, {st_mode=S_IFREG|0644, st_size=3035952, ...}) = 0
[pid 2383522] mmap(NULL, 3035952, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f09dd700000
[pid 2383522] close(3)                  = 0
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale/locale.alias", O_RDONLY|O_CLOEXEC) = 3
[pid 2383522] fstat(3, {st_mode=S_IFREG|0644, st_size=2996, ...}) = 0
[pid 2383522] read(3, "# Locale name alias data base.\n#"..., 4096) = 2996
[pid 2383522] read(3, "", 4096)         = 0
[pid 2383522] close(3)                  = 0
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale/en_US.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale/en_US.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale/en_US/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale/en.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale/en.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale/en/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale-langpack/en.UTF-8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale-langpack/en.utf8/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/usr/share/locale-langpack/en/LC_MESSAGES/gcc-9.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] ioctl(2, TCGETS, 0x7ffcf1438980) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383522] rt_sigaction(SIGQUIT, {sa_handler=SIG_IGN, sa_mask=[QUIT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383522] rt_sigaction(SIGQUIT, {sa_handler=0x408320, sa_mask=[QUIT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_IGN, sa_mask=[QUIT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, 8) = 0
[pid 2383522] rt_sigaction(SIGINT, {sa_handler=SIG_IGN, sa_mask=[INT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383522] rt_sigaction(SIGINT, {sa_handler=0x408320, sa_mask=[INT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_IGN, sa_mask=[INT], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, 8) = 0
[pid 2383522] rt_sigaction(SIGALRM, {sa_handler=SIG_IGN, sa_mask=[ALRM], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383522] rt_sigaction(SIGALRM, {sa_handler=0x408320, sa_mask=[ALRM], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_IGN, sa_mask=[ALRM], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, 8) = 0
[pid 2383522] rt_sigaction(SIGHUP, {sa_handler=SIG_IGN, sa_mask=[HUP], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383522] rt_sigaction(SIGHUP, {sa_handler=0x408320, sa_mask=[HUP], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_IGN, sa_mask=[HUP], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, 8) = 0
[pid 2383522] rt_sigaction(SIGSEGV, {sa_handler=SIG_IGN, sa_mask=[SEGV], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383522] rt_sigaction(SIGSEGV, {sa_handler=0x408320, sa_mask=[SEGV], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_IGN, sa_mask=[SEGV], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, 8) = 0
[pid 2383522] rt_sigaction(SIGBUS, {sa_handler=SIG_IGN, sa_mask=[BUS], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_DFL, sa_mask=[], sa_flags=0}, 8) = 0
[pid 2383522] rt_sigaction(SIGBUS, {sa_handler=0x408320, sa_mask=[BUS], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, {sa_handler=SIG_IGN, sa_mask=[BUS], sa_flags=SA_RESTORER|SA_RESTART, sa_restorer=0x7f09dda2c090}, 8) = 0
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/real-ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/real-ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/real-ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/real-ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/real-ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/collect-ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/collect-ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/collect-ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/collect-ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/collect-ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/inspur/nfs/wqy/.vscode-server/bin/fdb98833154679dbaa7af67a5a29fe19e55c2b73/bin/remote-cli/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/.local/bin/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/bin/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/condabin/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/sbin/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/bin/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/sbin/ld", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/bin/ld", {st_mode=S_IFREG|0755, st_size=1740384, ...}) = 0
[pid 2383522] access("/usr/bin/ld", X_OK) = 0
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/inspur/nfs/wqy/.vscode-server/bin/fdb98833154679dbaa7af67a5a29fe19e55c2b73/bin/remote-cli/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/.local/bin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/bin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/condabin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/sbin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/bin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/sbin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/bin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/sbin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/bin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/games/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/games/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/snap/bin/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/.dotnet/tools/gnm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/inspur/nfs/wqy/.vscode-server/bin/fdb98833154679dbaa7af67a5a29fe19e55c2b73/bin/remote-cli/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/.local/bin/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/bin/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/condabin/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/sbin/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/bin/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/sbin/nm", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/bin/nm", {st_mode=S_IFREG|0755, st_size=52664, ...}) = 0
[pid 2383522] access("/usr/bin/nm", X_OK) = 0
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/inspur/nfs/wqy/.vscode-server/bin/fdb98833154679dbaa7af67a5a29fe19e55c2b73/bin/remote-cli/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/.local/bin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/bin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/condabin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/sbin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/bin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/sbin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/bin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/sbin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/bin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/games/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/games/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/snap/bin/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/.dotnet/tools/gstrip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/inspur/nfs/wqy/.vscode-server/bin/fdb98833154679dbaa7af67a5a29fe19e55c2b73/bin/remote-cli/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/.local/bin/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/bin/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/condabin/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/sbin/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/bin/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/sbin/strip", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/bin/strip", {st_mode=S_IFREG|0755, st_size=186856, ...}) = 0
[pid 2383522] access("/usr/bin/strip", X_OK) = 0
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/9/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/lib/gcc/x86_64-linux-gnu/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/inspur/nfs/wqy/.vscode-server/bin/fdb98833154679dbaa7af67a5a29fe19e55c2b73/bin/remote-cli/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/.local/bin/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/bin/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/home/wqy/anaconda3/condabin/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/cuda-12.1/bin/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/sbin/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/local/bin/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/sbin/gcc", 0x7ffcf1438990) = -1 ENOENT (No such file or directory)
[pid 2383522] stat("/usr/bin/gcc", {st_mode=S_IFREG|0755, st_size=1158288, ...}) = 0
[pid 2383522] access("/usr/bin/gcc", X_OK) = 0
[pid 2383522] access("/tmp", R_OK|W_OK|X_OK) = 0
[pid 2383522] getpid()                  = 2383522
[pid 2383522] openat(AT_FDCWD, "/tmp/ccuMnXAW.cdtor.c", O_RDWR|O_CREAT|O_EXCL, 0600) = 3
[pid 2383522] close(3)                  = 0
[pid 2383522] getpid()                  = 2383522
[pid 2383522] openat(AT_FDCWD, "/tmp/ccOC2toW.cdtor.o", O_RDWR|O_CREAT|O_EXCL, 0600) = 3
[pid 2383522] close(3)                  = 0
[pid 2383522] getpid()                  = 2383522
[pid 2383522] openat(AT_FDCWD, "/tmp/ccfvwPdV.ld", O_RDWR|O_CREAT|O_EXCL, 0600) = 3
[pid 2383522] close(3)                  = 0
[pid 2383522] getpid()                  = 2383522
[pid 2383522] openat(AT_FDCWD, "/tmp/cclBbN6W.le", O_RDWR|O_CREAT|O_EXCL, 0600) = 3
[pid 2383522] close(3)                  = 0
[pid 2383522] openat(AT_FDCWD, "/tmp/ccfvwPdV.ld", O_WRONLY|O_CREAT|O_TRUNC, 0666) = 3
[pid 2383522] openat(AT_FDCWD, "/tmp/cclBbN6W.le", O_WRONLY|O_CREAT|O_TRUNC, 0666) = 4
[pid 2383522] pipe2([5, 6], O_CLOEXEC)  = 0
[pid 2383522] vfork(strace: Process 2383523 attached
 <unfinished ...>
[pid 2383523] close(5)                  = 0
[pid 2383523] dup2(3, 1)                = 1
[pid 2383523] close(3)                  = 0
[pid 2383523] dup2(4, 2)                = 2
[pid 2383523] close(4)                  = 0
[pid 2383523] execve("/usr/bin/ld", ["/usr/bin/ld", "-plugin", "/usr/lib/gcc/x86_64-linux-gnu/9/"..., "-plugin-opt=/usr/lib/gcc/x86_64-"..., "-plugin-opt=-fresolution=/tmp/cc"..., "-plugin-opt=-pass-through=-lgcc", "-plugin-opt=-pass-through=-lgcc_"..., "-plugin-opt=-pass-through=-lc", "-plugin-opt=-pass-through=-lgcc", "-plugin-opt=-pass-through=-lgcc_"..., "--build-id", "--eh-frame-hdr", "-m", "elf_x86_64", "--hash-style=gnu", "--as-needed", "-dynamic-linker", "/lib64/ld-linux-x86-64.so.2", "-pie", "-z", "now", "-z", "relro", "/usr/lib/gcc/x86_64-linux-gnu/9/"..., "/usr/lib/gcc/x86_64-linux-gnu/9/"..., "/usr/lib/gcc/x86_64-linux-gnu/9/"..., "-L/usr/lib/gcc/x86_64-linux-gnu/"..., "-L/usr/lib/gcc/x86_64-linux-gnu/"..., "-L/usr/lib/gcc/x86_64-linux-gnu/"..., "-L/lib/x86_64-linux-gnu", "-L/lib/../lib", "-L/usr/lib/x86_64-linux-gnu", ...], 0x7ffcf1438da0 /* 57 vars */ <unfinished ...>
[pid 2383522] <... vfork resumed>)      = 2383523
[pid 2383522] close(6)                  = 0
[pid 2383522] read(5, "", 16)           = 0
[pid 2383523] <... execve resumed>)     = 0
[pid 2383522] close(5)                  = 0
[pid 2383522] close(3 <unfinished ...>
[pid 2383523] brk(NULL <unfinished ...>
[pid 2383522] <... close resumed>)      = 0
[pid 2383523] <... brk resumed>)        = 0x55df65d13000
[pid 2383522] close(4 <unfinished ...>
[pid 2383523] arch_prctl(0x3001 /* ARCH_??? */, 0x7ffdd86e4270 <unfinished ...>
[pid 2383522] <... close resumed>)      = 0
[pid 2383523] <... arch_prctl resumed>) = -1 EINVAL (Invalid argument)
[pid 2383522] wait4(2383523,  <unfinished ...>
[pid 2383523] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f5c2c0c3000
[pid 2383523] access("/etc/ld.so.preload", R_OK) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/x86_64", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/tls/haswell/avx512_1", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/tls/haswell/x86_64", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/haswell/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/tls/haswell", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/tls/avx512_1/x86_64", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/tls/avx512_1", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/tls/x86_64", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/tls/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/tls", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/haswell/avx512_1/x86_64", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/haswell/avx512_1", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/haswell/x86_64", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/haswell/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/haswell", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/avx512_1/x86_64", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/avx512_1", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64/x86_64", 0x7ffdd86e34c0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/local/cuda-12.1/lib64", {st_mode=S_IFDIR|0755, st_size=12288, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "avx512_1/x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "avx512_1/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "x86_64/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=133479, ...}) = 0
[pid 2383523] mmap(NULL, 133479, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f5c2c0a2000
[pid 2383523] close(3)                  = 0
[pid 2383523] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libbfd-2.34-system.so", O_RDONLY|O_CLOEXEC) = 3
[pid 2383523] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0000^\4\0\0\0\0\0"..., 832) = 832
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=1319320, ...}) = 0
[pid 2383523] mmap(NULL, 1338944, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f5c2bf5b000
[pid 2383523] mmap(0x7f5c2bf9d000, 724992, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x42000) = 0x7f5c2bf9d000
[pid 2383523] mmap(0x7f5c2c04e000, 225280, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0xf3000) = 0x7f5c2c04e000
[pid 2383523] mmap(0x7f5c2c085000, 102400, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x129000) = 0x7f5c2c085000
[pid 2383523] mmap(0x7f5c2c09e000, 15936, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f5c2c09e000
[pid 2383523] close(3)                  = 0
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/avx512_1/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/x86_64/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/avx512_1/x86_64/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/avx512_1/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/x86_64/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/avx512_1/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/x86_64/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "avx512_1/x86_64/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "avx512_1/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "x86_64/libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "libctf.so.0", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libctf.so.0", O_RDONLY|O_CLOEXEC) = 3
[pid 2383523] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\240O\0\0\0\0\0\0"..., 832) = 832
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=117856, ...}) = 0
[pid 2383523] mmap(NULL, 119880, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f5c2bf3d000
[pid 2383523] mprotect(0x7f5c2bf41000, 98304, PROT_NONE) = 0
[pid 2383523] mmap(0x7f5c2bf41000, 69632, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x4000) = 0x7f5c2bf41000
[pid 2383523] mmap(0x7f5c2bf52000, 24576, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x15000) = 0x7f5c2bf52000
[pid 2383523] mmap(0x7f5c2bf59000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1b000) = 0x7f5c2bf59000
[pid 2383523] close(3)                  = 0
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "avx512_1/x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "avx512_1/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "x86_64/libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "libdl.so.2", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libdl.so.2", O_RDONLY|O_CLOEXEC) = 3
[pid 2383523] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0 \22\0\0\0\0\0\0"..., 832) = 832
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=18848, ...}) = 0
[pid 2383523] mmap(NULL, 20752, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f5c2bf37000
[pid 2383523] mmap(0x7f5c2bf38000, 8192, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1000) = 0x7f5c2bf38000
[pid 2383523] mmap(0x7f5c2bf3a000, 4096, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7f5c2bf3a000
[pid 2383523] mmap(0x7f5c2bf3b000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x3000) = 0x7f5c2bf3b000
[pid 2383523] close(3)                  = 0
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "avx512_1/x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "avx512_1/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "x86_64/libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "libc.so.6", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
[pid 2383523] read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 832) = 832
[pid 2383523] pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
[pid 2383523] pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
[pid 2383523] pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\30x\346\264ur\f|Q\226\236i\253-'o"..., 68, 880) = 68
[pid 2383523] fstat(3, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] pread64(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 784, 64) = 784
[pid 2383523] pread64(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32, 848) = 32
[pid 2383523] pread64(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0\30x\346\264ur\f|Q\226\236i\253-'o"..., 68, 880) = 68
[pid 2383523] mmap(NULL, 2037344, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f5c2bd45000
[pid 2383523] mmap(0x7f5c2bd67000, 1540096, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x22000) = 0x7f5c2bd67000
[pid 2383523] mmap(0x7f5c2bedf000, 319488, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19a000) = 0x7f5c2bedf000
[pid 2383523] mmap(0x7f5c2bf2d000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1e7000) = 0x7f5c2bf2d000
[pid 2383523] mmap(0x7f5c2bf33000, 13920, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f5c2bf33000
[pid 2383523] close(3)                  = 0
[pid 2383523] openat(AT_FDCWD, "/usr/local/cuda-12.1/lib64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/haswell/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "tls/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "haswell/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "avx512_1/x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "avx512_1/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "x86_64/libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "libz.so.1", O_RDONLY|O_CLOEXEC) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libz.so.1", O_RDONLY|O_CLOEXEC) = 3
[pid 2383523] read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\200\"\0\0\0\0\0\0"..., 832) = 832
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=108936, ...}) = 0
[pid 2383523] mmap(NULL, 110776, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f5c2bd29000
[pid 2383523] mprotect(0x7f5c2bd2b000, 98304, PROT_NONE) = 0
[pid 2383523] mmap(0x7f5c2bd2b000, 69632, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x2000) = 0x7f5c2bd2b000
[pid 2383523] mmap(0x7f5c2bd3c000, 24576, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x13000) = 0x7f5c2bd3c000
[pid 2383523] mmap(0x7f5c2bd43000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x19000) = 0x7f5c2bd43000
[pid 2383523] close(3)                  = 0
[pid 2383523] mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f5c2bd27000
[pid 2383523] arch_prctl(ARCH_SET_FS, 0x7f5c2bd28100) = 0
[pid 2383523] mprotect(0x7f5c2bf2d000, 16384, PROT_READ) = 0
[pid 2383523] mprotect(0x7f5c2bd43000, 4096, PROT_READ) = 0
[pid 2383523] mprotect(0x7f5c2bf3b000, 4096, PROT_READ) = 0
[pid 2383523] mprotect(0x7f5c2c085000, 73728, PROT_READ) = 0
[pid 2383523] mprotect(0x7f5c2bf59000, 4096, PROT_READ) = 0
[pid 2383523] mprotect(0x55df642c9000, 28672, PROT_READ) = 0
[pid 2383523] mprotect(0x7f5c2c0f2000, 4096, PROT_READ) = 0
[pid 2383523] munmap(0x7f5c2c0a2000, 133479) = 0
[pid 2383523] getrusage(RUSAGE_SELF, {ru_utime={tv_sec=0, tv_usec=1815}, ru_stime={tv_sec=0, tv_usec=3631}, ...}) = 0
[pid 2383523] brk(NULL)                 = 0x55df65d13000
[pid 2383523] brk(0x55df65d34000)       = 0x55df65d34000
[pid 2383523] openat(AT_FDCWD, "/usr/lib/locale/locale-archive", O_RDONLY|O_CLOEXEC) = 3
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=3035952, ...}) = 0
[pid 2383523] mmap(NULL, 3035952, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f5c2ba41000
[pid 2383523] close(3)                  = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/x86_64-linux-gnu/gconv/gconv-modules.cache", O_RDONLY) = 3
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=27002, ...}) = 0
[pid 2383523] mmap(NULL, 27002, PROT_READ, MAP_SHARED, 3, 0) = 0x7f5c2c0bc000
[pid 2383523] close(3)                  = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/liblto_plugin.so", O_RDONLY|O_CLOEXEC) = 3
[pid 2383523] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\320M\0\0\0\0\0\0"..., 832) = 832
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=93216, ...}) = 0
[pid 2383523] mmap(NULL, 95456, PROT_READ, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f5c2c0a4000
[pid 2383523] mprotect(0x7f5c2c0a8000, 73728, PROT_NONE) = 0
[pid 2383523] mmap(0x7f5c2c0a8000, 53248, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x4000) = 0x7f5c2c0a8000
[pid 2383523] mmap(0x7f5c2c0b5000, 16384, PROT_READ, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x11000) = 0x7f5c2c0b5000
[pid 2383523] mmap(0x7f5c2c0ba000, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x15000) = 0x7f5c2c0ba000
[pid 2383523] close(3)                  = 0
[pid 2383523] mprotect(0x7f5c2c0ba000, 4096, PROT_READ) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/locale.alias", O_RDONLY|O_CLOEXEC) = 3
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=2996, ...}) = 0
[pid 2383523] read(3, "# Locale name alias data base.\n#"..., 4096) = 2996
[pid 2383523] read(3, "", 4096)         = 0
[pid 2383523] close(3)                  = 0
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en_US.UTF-8/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en_US.utf8/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en_US/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en.UTF-8/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en.utf8/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.UTF-8/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.utf8/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en.UTF-8/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en.utf8/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en/LC_MESSAGES/ld.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] prlimit64(0, RLIMIT_NOFILE, NULL, {rlim_cur=1024*1024, rlim_max=1024*1024}) = 0
[pid 2383523] stat("a.out", {st_mode=S_IFREG|0755, st_size=19160, ...}) = 0
[pid 2383523] lstat("a.out", {st_mode=S_IFREG|0755, st_size=19160, ...}) = 0
[pid 2383523] unlink("a.out")           = 0
[pid 2383523] openat(AT_FDCWD, "a.out", O_RDWR|O_CREAT|O_TRUNC, 0666) = 3
[pid 2383523] fcntl(3, F_GETFD)         = 0
[pid 2383523] fcntl(3, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] brk(0x55df65d59000)       = 0x55df65d59000
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o", {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o", O_RDONLY) = 4
[pid 2383523] fcntl(4, F_GETFD)         = 0
[pid 2383523] fcntl(4, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] read(4, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 1912
[pid 2383523] lseek(4, 0, SEEK_SET)     = 0
[pid 2383523] read(4, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 1912
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/Scrt1.o", O_RDONLY) = 5
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] lseek(5, 0, SEEK_SET)     = 0
[pid 2383523] read(5, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(5, 0, SEEK_SET)     = 0
[pid 2383523] read(5, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(5, 1080, SEEK_SET)  = 1080
[pid 2383523] read(5, "\33\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 832) = 832
[pid 2383523] lseek(5, 888, SEEK_SET)   = 888
[pid 2383523] read(5, "\0.symtab\0.strtab\0.shstrtab\0.note"..., 126) = 126
[pid 2383523] lseek(5, 1080, SEEK_SET)  = 1080
[pid 2383523] read(5, "\33\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 832) = 832
[pid 2383523] lseek(5, 888, SEEK_SET)   = 888
[pid 2383523] read(5, "\0.symtab\0.strtab\0.shstrtab\0.note"..., 126) = 126
[pid 2383523] close(5)                  = 0
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/crti.o", {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] brk(0x55df65d7a000)       = 0x55df65d7a000
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/crti.o", O_RDONLY) = 5
[pid 2383523] fcntl(5, F_GETFD)         = 0
[pid 2383523] fcntl(5, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] read(5, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 1360
[pid 2383523] lseek(5, 0, SEEK_SET)     = 0
[pid 2383523] read(5, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 1360
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(5, 1360, SEEK_SET)  = 1360
[pid 2383523] lseek(5, 1360, SEEK_SET)  = 1360
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(5, 1360, SEEK_SET)  = 1360
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(5, 1360, SEEK_SET)  = 1360
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/crti.o", O_RDONLY) = 6
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(6, 0, SEEK_SET)     = 0
[pid 2383523] read(6, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(6, 0, SEEK_SET)     = 0
[pid 2383523] read(6, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(6, 656, SEEK_SET)   = 656
[pid 2383523] read(6, "\33\0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 704) = 704
[pid 2383523] lseek(6, 496, SEEK_SET)   = 496
[pid 2383523] read(6, "\0.symtab\0.strtab\0.shstrtab\0.text"..., 96) = 96
[pid 2383523] lseek(6, 656, SEEK_SET)   = 656
[pid 2383523] read(6, "\33\0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 704) = 704
[pid 2383523] lseek(6, 496, SEEK_SET)   = 496
[pid 2383523] read(6, "\0.symtab\0.strtab\0.shstrtab\0.text"..., 96) = 96
[pid 2383523] close(6)                  = 0
[pid 2383523] lseek(5, 1360, SEEK_SET)  = 1360
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(5, 1360, SEEK_SET)  = 1360
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/crtbeginS.o", {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/crtbeginS.o", O_RDONLY) = 6
[pid 2383523] fcntl(6, F_GETFD)         = 0
[pid 2383523] fcntl(6, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] read(6, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 2928
[pid 2383523] lseek(6, 0, SEEK_SET)     = 0
[pid 2383523] read(6, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 2928
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/crtbeginS.o", O_RDONLY) = 7
[pid 2383523] fstat(7, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] lseek(7, 0, SEEK_SET)     = 0
[pid 2383523] read(7, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(7, 0, SEEK_SET)     = 0
[pid 2383523] read(7, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(7, 1840, SEEK_SET)  = 1840
[pid 2383523] read(7, " \0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 1088) = 1088
[pid 2383523] lseek(7, 1608, SEEK_SET)  = 1608
[pid 2383523] read(7, "\0.symtab\0.strtab\0.shstrtab\0.rela"..., 164) = 164
[pid 2383523] lseek(7, 1840, SEEK_SET)  = 1840
[pid 2383523] read(7, " \0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 1088) = 1088
[pid 2383523] lseek(7, 1608, SEEK_SET)  = 1608
[pid 2383523] read(7, "\0.symtab\0.strtab\0.shstrtab\0.rela"..., 164) = 164
[pid 2383523] close(7)                  = 0
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] stat("/tmp/ccW5PG7J.o", {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/tmp/ccW5PG7J.o", O_RDONLY) = 7
[pid 2383523] fcntl(7, F_GETFD)         = 0
[pid 2383523] fcntl(7, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] brk(0x55df65d9d000)       = 0x55df65d9d000
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] read(7, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 1680
[pid 2383523] lseek(7, 0, SEEK_SET)     = 0
[pid 2383523] read(7, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 1680
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] openat(AT_FDCWD, "/tmp/ccW5PG7J.o", O_RDONLY) = 8
[pid 2383523] fstat(8, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] lseek(8, 0, SEEK_SET)     = 0
[pid 2383523] read(8, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(8, 0, SEEK_SET)     = 0
[pid 2383523] read(8, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(8, 848, SEEK_SET)   = 848
[pid 2383523] read(8, " \0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 832) = 832
[pid 2383523] lseek(8, 664, SEEK_SET)   = 664
[pid 2383523] read(8, "\0.symtab\0.strtab\0.shstrtab\0.rela"..., 116) = 116
[pid 2383523] lseek(8, 848, SEEK_SET)   = 848
[pid 2383523] read(8, " \0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 832) = 832
[pid 2383523] lseek(8, 664, SEEK_SET)   = 664
[pid 2383523] read(8, "\0.symtab\0.strtab\0.shstrtab\0.rela"..., 116) = 116
[pid 2383523] close(8)                  = 0
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.so", 0x7ffdd86e3ec0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.so", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.a", {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.a", O_RDONLY) = 8
[pid 2383523] fcntl(8, F_GETFD)         = 0
[pid 2383523] fcntl(8, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(8, {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] read(8, "!<arch>\n/               0       "..., 4096) = 4096
[pid 2383523] lseek(8, -4088, SEEK_CUR) = 8
[pid 2383523] read(8, "/               0           0   "..., 4096) = 4096
[pid 2383523] read(8, "0_to_bid32\0__binary128_to_bid32\0"..., 8192) = 8192
[pid 2383523] read(8, "_14\0__avx_resms64f_13\0__avx_resm"..., 4096) = 4096
[pid 2383523] lseek(8, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(8, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(8, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(8, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(8, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(8, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(8, 16392, SEEK_SET) = 16392
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so", {st_mode=S_IFREG|0644, st_size=132, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so", O_RDONLY) = 9
[pid 2383523] fcntl(9, F_GETFD)         = 0
[pid 2383523] fcntl(9, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] brk(0x55df65dc5000)       = 0x55df65dc5000
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=132, ...}) = 0
[pid 2383523] read(9, "/* GNU ld script\n   Use the shar"..., 4096) = 132
[pid 2383523] lseek(9, 0, SEEK_SET)     = 0
[pid 2383523] read(9, "/* GNU ld script\n   Use the shar"..., 4096) = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so", O_RDONLY) = 10
[pid 2383523] fstat(10, {st_mode=S_IFREG|0644, st_size=132, ...}) = 0
[pid 2383523] lseek(10, 0, SEEK_SET)    = 0
[pid 2383523] read(10, "/* GNU ld script", 16) = 16
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so", O_RDONLY) = 11
[pid 2383523] ioctl(11, TCGETS, 0x7ffdd86e3e30) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] fstat(11, {st_mode=S_IFREG|0644, st_size=132, ...}) = 0
[pid 2383523] read(11, "/* GNU ld script\n   Use the shar"..., 8192) = 132
[pid 2383523] read(11, "", 4096)        = 0
[pid 2383523] read(11, "", 8192)        = 0
[pid 2383523] ioctl(11, TCGETS, 0x7ffdd86e3e10) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] close(11)                 = 0
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] lseek(9, 132, SEEK_SET)   = 132
[pid 2383523] close(9)                  = 0
[pid 2383523] brk(0x55df65dc0000)       = 0x55df65dc0000
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so", O_RDONLY) = 9
[pid 2383523] ioctl(9, TCGETS, 0x7ffdd86e3f50) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=132, ...}) = 0
[pid 2383523] read(9, "/* GNU ld script\n   Use the shar"..., 8192) = 132
[pid 2383523] read(9, "", 4096)         = 0
[pid 2383523] read(9, "", 8192)         = 0
[pid 2383523] ioctl(9, TCGETS, 0x7ffdd86e23d0) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] close(9)                  = 0
[pid 2383523] stat("libgcc_s.so.1", 0x7ffdd86e3eb0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "libgcc_s.so.1", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so.1", 0x7ffdd86e3eb0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so.1", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libgcc_s.so.1", {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libgcc_s.so.1", O_RDONLY) = 9
[pid 2383523] fcntl(9, F_GETFD)         = 0
[pid 2383523] fcntl(9, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] read(9, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(9, 0, SEEK_SET)     = 0
[pid 2383523] read(9, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(9, 143360, SEEK_SET) = 143360
[pid 2383523] read(9, "\340=\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\00000\0\0\0\0\0\0"..., 4096) = 2640
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(9, 146000, SEEK_SET) = 146000
[pid 2383523] lseek(9, 146000, SEEK_SET) = 146000
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(9, 0, SEEK_SET)     = 0
[pid 2383523] read(9, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(9, 143360, SEEK_SET) = 143360
[pid 2383523] read(9, "\340=\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\00000\0\0\0\0\0\0"..., 4096) = 2640
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(9, 0, SEEK_SET)     = 0
[pid 2383523] read(9, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libgcc_s.so.1", O_RDONLY) = 11
[pid 2383523] fstat(11, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(11, 0, SEEK_SET)    = 0
[pid 2383523] read(11, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(11, 0, SEEK_SET)    = 0
[pid 2383523] read(11, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(11, 144208, SEEK_SET) = 144208
[pid 2383523] read(11, "\v\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0\250\2\0\0\0\0\0\0\250\2\0\0\0\0\0\0"..., 1792) = 1792
[pid 2383523] lseek(11, 143868, SEEK_SET) = 143868
[pid 2383523] read(11, "\0.shstrtab\0.note.gnu.property\0.n"..., 274) = 274
[pid 2383523] lseek(11, 144208, SEEK_SET) = 144208
[pid 2383523] read(11, "\v\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0\250\2\0\0\0\0\0\0\250\2\0\0\0\0\0\0"..., 1792) = 1792
[pid 2383523] lseek(11, 143868, SEEK_SET) = 143868
[pid 2383523] read(11, "\0.shstrtab\0.note.gnu.property\0.n"..., 274) = 274
[pid 2383523] close(11)                 = 0
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(9, 139264, SEEK_SET) = 139264
[pid 2383523] read(9, "\360\0\0\0\0E\16\20\206\2C\r\6D\217\3\216\4E\215\5I\214\6H\203\7\2\315\f\7\10"..., 4096) = 4096
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(9, 4096, SEEK_SET)  = 4096
[pid 2383523] read(9, "\0\0\0\0\0\0\0\0T\5\0\0\22\0\17\0\360A\1\0\0\0\0\0\n\1\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] read(9, "_extendxftf2\0__extendbfsf2\0__tru"..., 4096) = 4096
[pid 2383523] lseek(9, 0, SEEK_SET)     = 0
[pid 2383523] read(9, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] read(9, "\0\0\0\0\0\0\0\0T\5\0\0\22\0\17\0\360A\1\0\0\0\0\0\n\1\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(9, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(9, 8192, SEEK_SET)  = 8192
[pid 2383523] read(9, "_extendxftf2\0__extendbfsf2\0__tru"..., 4096) = 4096
[pid 2383523] lseek(9, 12288, SEEK_SET) = 12288
[pid 2383523] lseek(9, 12288, SEEK_SET) = 12288
[pid 2383523] brk(0x55df65de1000)       = 0x55df65de1000
[pid 2383523] brk(0x55df65dd7000)       = 0x55df65dd7000
[pid 2383523] brk(0x55df65dd6000)       = 0x55df65dd6000
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.so", 0x7ffdd86e3e60) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.so", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.a", {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.a", O_RDONLY) = 11
[pid 2383523] fcntl(11, F_GETFD)        = 0
[pid 2383523] fcntl(11, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(11, {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] read(11, "!<arch>\n/               0       "..., 4096) = 4096
[pid 2383523] lseek(11, -4088, SEEK_CUR) = 8
[pid 2383523] read(11, "/               0           0   "..., 4096) = 4096
[pid 2383523] read(11, "0_to_bid32\0__binary128_to_bid32\0"..., 8192) = 8192
[pid 2383523] read(11, "_14\0__avx_resms64f_13\0__avx_resm"..., 4096) = 4096
[pid 2383523] lseek(11, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(11, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(11, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(11, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(11, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(11, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(11, 16392, SEEK_SET) = 16392
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libc.so", 0x7ffdd86e3ec0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libc.so", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libc.a", 0x7ffdd86e3f10) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libc.a", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libc.so", {st_mode=S_IFREG|0644, st_size=298, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libc.so", O_RDONLY) = 12
[pid 2383523] fcntl(12, F_GETFD)        = 0
[pid 2383523] fcntl(12, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] brk(0x55df65dfd000)       = 0x55df65dfd000
[pid 2383523] fstat(12, {st_mode=S_IFREG|0644, st_size=298, ...}) = 0
[pid 2383523] read(12, "/* GNU ld script\n   Use the shar"..., 4096) = 298
[pid 2383523] lseek(12, 0, SEEK_SET)    = 0
[pid 2383523] read(12, "/* GNU ld script\n   Use the shar"..., 4096) = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libc.so", O_RDONLY) = 13
[pid 2383523] fstat(13, {st_mode=S_IFREG|0644, st_size=298, ...}) = 0
[pid 2383523] lseek(13, 0, SEEK_SET)    = 0
[pid 2383523] read(13, "/* GNU ld script", 16) = 16
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libc.so", O_RDONLY) = 14
[pid 2383523] ioctl(14, TCGETS, 0x7ffdd86e3e30) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] fstat(14, {st_mode=S_IFREG|0644, st_size=298, ...}) = 0
[pid 2383523] read(14, "/* GNU ld script\n   Use the shar"..., 8192) = 298
[pid 2383523] read(14, "", 4096)        = 0
[pid 2383523] read(14, "", 8192)        = 0
[pid 2383523] ioctl(14, TCGETS, 0x7ffdd86e3e10) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] close(14)                 = 0
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] lseek(12, 298, SEEK_SET)  = 298
[pid 2383523] close(12)                 = 0
[pid 2383523] brk(0x55df65df8000)       = 0x55df65df8000
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libc.so", O_RDONLY) = 12
[pid 2383523] ioctl(12, TCGETS, 0x7ffdd86e3f50) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] fstat(12, {st_mode=S_IFREG|0644, st_size=298, ...}) = 0
[pid 2383523] read(12, "/* GNU ld script\n   Use the shar"..., 8192) = 298
[pid 2383523] read(12, "", 4096)        = 0
[pid 2383523] read(12, "", 8192)        = 0
[pid 2383523] ioctl(12, TCGETS, 0x7ffdd86e23d0) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] close(12)                 = 0
[pid 2383523] stat("/lib/x86_64-linux-gnu/libc.so.6", {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY) = 12
[pid 2383523] fcntl(12, F_GETFD)        = 0
[pid 2383523] fcntl(12, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] read(12, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(12, 0, SEEK_SET)    = 0
[pid 2383523] read(12, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] read(12, "ill always fail\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] read(12, "\0\0\0\0\0\0\0\0 \0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\177\1\0\0\7\0\0\0"..., 4096) = 2072
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] read(12, "ill always fail\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] read(12, "\0\0\0\0\0\0\0\0 \0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\177\1\0\0\7\0\0\0"..., 4096) = 2072
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] lseek(12, 0, SEEK_SET)    = 0
[pid 2383523] read(12, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] read(12, "ill always fail\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] lseek(12, 0, SEEK_SET)    = 0
[pid 2383523] read(12, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] lseek(12, 2015232, SEEK_SET) = 2015232
[pid 2383523] read(12, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] read(12, "\0\0\0\0\0\0\0\0libc\0memory_arena_retry\0"..., 4096) = 4096
[pid 2383523] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY) = 14
[pid 2383523] fstat(14, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] lseek(14, 0, SEEK_SET)    = 0
[pid 2383523] read(14, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(14, 0, SEEK_SET)    = 0
[pid 2383523] read(14, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\300A\2\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(14, 2025304, SEEK_SET) = 2025304
[pid 2383523] read(14, "\v\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0P\3\0\0\0\0\0\0P\3\0\0\0\0\0\0"..., 4288) = 4288
[pid 2383523] lseek(14, 2024136, SEEK_SET) = 2024136
[pid 2383523] read(14, "\0.shstrtab\0.note.gnu.property\0.n"..., 1099) = 1099
[pid 2383523] lseek(14, 2025304, SEEK_SET) = 2025304
[pid 2383523] read(14, "\v\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0P\3\0\0\0\0\0\0P\3\0\0\0\0\0\0"..., 4288) = 4288
[pid 2383523] lseek(14, 2024136, SEEK_SET) = 2024136
[pid 2383523] read(14, "\0.shstrtab\0.note.gnu.property\0.n"..., 1099) = 1099
[pid 2383523] close(14)                 = 0
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] lseek(12, 2023424, SEEK_SET) = 2023424
[pid 2383523] read(12, "ill always fail\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] lseek(12, 2027520, SEEK_SET) = 2027520
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] lseek(12, 2007040, SEEK_SET) = 2007040
[pid 2383523] read(12, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\30D\33\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] lseek(12, 69632, SEEK_SET) = 69632
[pid 2383523] read(12, "\371\2\0\0\"\0\17\0p\336\20\0\0\0\0\0\36\1\0\0\0\0\0\0\20Q\0\0\"\0\17\0"..., 4096) = 4096
[pid 2383523] brk(0x55df65e1c000)       = 0x55df65e1c000
[pid 2383523] read(12, "s_chk\0getservent_r\0addseverity\0t"..., 20480) = 20480
[pid 2383523] read(12, "osix_spawnattr_setsigdefault\0__f"..., 4096) = 4096
[pid 2383523] lseek(12, 16384, SEEK_SET) = 16384
[pid 2383523] read(12, "\20\344\265$'!gi\vPTK\334F)\245\325\25\254\310\3466M\7\352x\201\33mO\242\35"..., 4096) = 4096
[pid 2383523] read(12, "s;\0\0\22\0\17\0\340\6\3\0\0\0\0\0\344\t\0\0\0\0\0\0_U\0\0\22\0\17\0"..., 49152) = 49152
[pid 2383523] read(12, "\371\2\0\0\"\0\17\0p\336\20\0\0\0\0\0\36\1\0\0\0\0\0\0\20Q\0\0\"\0\17\0"..., 4096) = 4096
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] lseek(12, 102400, SEEK_SET) = 102400
[pid 2383523] read(12, "\2\0\2\200\2\0\2\0\2\0\10\0\37\0\2\0\2\0\2\0\4\0\2\0\2\0\2\0\2\0\2\0"..., 4096) = 4096
[pid 2383523] lseek(12, 106496, SEEK_SET) = 106496
[pid 2383523] lseek(12, 94208, SEEK_SET) = 94208
[pid 2383523] read(12, "osix_spawnattr_setsigdefault\0__f"..., 4096) = 4096
[pid 2383523] read(12, "\4\200 \0\2\200\22\0\2\0\2\0\2\0\2\0\2\0\2\0\2\0\2\0\4\0\2\0\2\0\2\0"..., 4096) = 4096
[pid 2383523] read(12, "\2\0\2\200\2\0\2\0\2\0\10\0\37\0\2\0\2\0\2\0\4\0\2\0\2\0\2\0\2\0\2\0"..., 4096) = 4096
[pid 2383523] brk(0x55df65e48000)       = 0x55df65e48000
[pid 2383523] brk(0x55df65e69000)       = 0x55df65e69000
[pid 2383523] brk(0x55df65e8a000)       = 0x55df65e8a000
[pid 2383523] brk(0x55df65eab000)       = 0x55df65eab000
[pid 2383523] brk(0x55df65ecc000)       = 0x55df65ecc000
[pid 2383523] brk(0x55df65ef0000)       = 0x55df65ef0000
[pid 2383523] brk(0x55df65f11000)       = 0x55df65f11000
[pid 2383523] brk(0x55df65f32000)       = 0x55df65f32000
[pid 2383523] brk(0x55df65f53000)       = 0x55df65f53000
[pid 2383523] brk(0x55df65f74000)       = 0x55df65f74000
[pid 2383523] mmap(NULL, 135168, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f5c2ba20000
[pid 2383523] brk(0x55df65f95000)       = 0x55df65f95000
[pid 2383523] stat("/usr/lib/x86_64-linux-gnu/libc_nonshared.a", {st_mode=S_IFREG|0644, st_size=23930, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/x86_64-linux-gnu/libc_nonshared.a", O_RDONLY) = 14
[pid 2383523] fcntl(14, F_GETFD)        = 0
[pid 2383523] fcntl(14, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(14, {st_mode=S_IFREG|0644, st_size=23930, ...}) = 0
[pid 2383523] read(14, "!<arch>\n/               0       "..., 4096) = 4096
[pid 2383523] lseek(14, -4088, SEEK_CUR) = 8
[pid 2383523] read(14, "/               0           0   "..., 4096) = 4096
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] openat(AT_FDCWD, "/usr/lib/x86_64-linux-gnu/libc_nonshared.a", O_RDONLY) = 15
[pid 2383523] lseek(15, 550, SEEK_SET)  = 550
[pid 2383523] read(15, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(15, 550, SEEK_SET)  = 550
[pid 2383523] read(15, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(15, 1582, SEEK_SET) = 1582
[pid 2383523] read(15, " \0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 704) = 704
[pid 2383523] lseek(15, 1414, SEEK_SET) = 1414
[pid 2383523] read(15, "\0.symtab\0.strtab\0.shstrtab\0.rela"..., 99) = 99
[pid 2383523] lseek(15, 1582, SEEK_SET) = 1582
[pid 2383523] read(15, " \0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 704) = 704
[pid 2383523] lseek(15, 1414, SEEK_SET) = 1414
[pid 2383523] read(15, "\0.symtab\0.strtab\0.shstrtab\0.rela"..., 99) = 99
[pid 2383523] close(15)                 = 0
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] stat("/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2", {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2", O_RDONLY) = 15
[pid 2383523] fcntl(15, F_GETFD)        = 0
[pid 2383523] fcntl(15, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] read(15, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\21\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(15, 0, SEEK_SET)    = 0
[pid 2383523] read(15, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\21\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 188416, SEEK_SET) = 188416
[pid 2383523] read(15, "\3\0\0\0stapsdt\0\321?\0\0\0\0\0\0\273\215\2\0\0\0\0\0\0\0\0\0"..., 4096) = 3088
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(15, 191504, SEEK_SET) = 191504
[pid 2383523] lseek(15, 191504, SEEK_SET) = 191504
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(15, 0, SEEK_SET)    = 0
[pid 2383523] read(15, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\21\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(15, 188416, SEEK_SET) = 188416
[pid 2383523] read(15, "\3\0\0\0stapsdt\0\321?\0\0\0\0\0\0\273\215\2\0\0\0\0\0\0\0\0\0"..., 4096) = 3088
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(15, 0, SEEK_SET)    = 0
[pid 2383523] read(15, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\21\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(15, 184320, SEEK_SET) = 184320
[pid 2383523] read(15, "h\336\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\20\20\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] read(15, "\3\0\0\0stapsdt\0\321?\0\0\0\0\0\0\273\215\2\0\0\0\0\0\0\0\0\0"..., 4096) = 3088
[pid 2383523] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2", O_RDONLY) = 16
[pid 2383523] fstat(16, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(16, 0, SEEK_SET)    = 0
[pid 2383523] read(16, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(16, 0, SEEK_SET)    = 0
[pid 2383523] read(16, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\21\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(16, 189776, SEEK_SET) = 189776
[pid 2383523] read(16, "\v\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0\250\2\0\0\0\0\0\0\250\2\0\0\0\0\0\0"..., 1728) = 1728
[pid 2383523] lseek(16, 189448, SEEK_SET) = 189448
[pid 2383523] read(16, "\0.shstrtab\0.note.gnu.property\0.n"..., 264) = 264
[pid 2383523] lseek(16, 189776, SEEK_SET) = 189776
[pid 2383523] read(16, "\v\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0\250\2\0\0\0\0\0\0\250\2\0\0\0\0\0\0"..., 1728) = 1728
[pid 2383523] lseek(16, 189448, SEEK_SET) = 189448
[pid 2383523] read(16, "\0.shstrtab\0.note.gnu.property\0.n"..., 264) = 264
[pid 2383523] close(16)                 = 0
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(15, 180224, SEEK_SET) = 180224
[pid 2383523] read(15, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(15, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(15, 0, SEEK_SET)    = 0
[pid 2383523] read(15, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\21\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] mmap(NULL, 1343488, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f5c2b8d8000
[pid 2383523] brk(0x55df65fb6000)       = 0x55df65fb6000
[pid 2383523] munmap(0x7f5c2b8d8000, 1343488) = 0
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(15, 4096, SEEK_SET) = 4096
[pid 2383523] brk(0x55df660fb000)       = 0x55df660fb000
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.so", 0x7ffdd86e3ec0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.so", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.a", {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.a", O_RDONLY) = 16
[pid 2383523] fcntl(16, F_GETFD)        = 0
[pid 2383523] fcntl(16, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(16, {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] read(16, "!<arch>\n/               0       "..., 4096) = 4096
[pid 2383523] lseek(16, -4088, SEEK_CUR) = 8
[pid 2383523] read(16, "/               0           0   "..., 4096) = 4096
[pid 2383523] read(16, "0_to_bid32\0__binary128_to_bid32\0"..., 8192) = 8192
[pid 2383523] read(16, "_14\0__avx_resms64f_13\0__avx_resm"..., 4096) = 4096
[pid 2383523] lseek(16, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(16, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(16, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(16, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(16, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(16, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(16, 16392, SEEK_SET) = 16392
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so", {st_mode=S_IFREG|0644, st_size=132, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so", O_RDONLY) = 17
[pid 2383523] fcntl(17, F_GETFD)        = 0
[pid 2383523] fcntl(17, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=132, ...}) = 0
[pid 2383523] read(17, "/* GNU ld script\n   Use the shar"..., 4096) = 132
[pid 2383523] lseek(17, 0, SEEK_SET)    = 0
[pid 2383523] read(17, "/* GNU ld script\n   Use the shar"..., 4096) = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so", O_RDONLY) = 18
[pid 2383523] fstat(18, {st_mode=S_IFREG|0644, st_size=132, ...}) = 0
[pid 2383523] lseek(18, 0, SEEK_SET)    = 0
[pid 2383523] read(18, "/* GNU ld script", 16) = 16
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so", O_RDONLY) = 23
[pid 2383523] ioctl(23, TCGETS, 0x7ffdd86e3e30) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] fstat(23, {st_mode=S_IFREG|0644, st_size=132, ...}) = 0
[pid 2383523] read(23, "/* GNU ld script\n   Use the shar"..., 8192) = 132
[pid 2383523] read(23, "", 4096)        = 0
[pid 2383523] read(23, "", 8192)        = 0
[pid 2383523] ioctl(23, TCGETS, 0x7ffdd86e3e10) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] close(23)                 = 0
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] lseek(17, 132, SEEK_SET)  = 132
[pid 2383523] close(17)                 = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so", O_RDONLY) = 17
[pid 2383523] ioctl(17, TCGETS, 0x7ffdd86e3f50) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=132, ...}) = 0
[pid 2383523] read(17, "/* GNU ld script\n   Use the shar"..., 8192) = 132
[pid 2383523] read(17, "", 4096)        = 0
[pid 2383523] read(17, "", 8192)        = 0
[pid 2383523] ioctl(17, TCGETS, 0x7ffdd86e23d0) = -1 ENOTTY (Inappropriate ioctl for device)
[pid 2383523] close(17)                 = 0
[pid 2383523] stat("libgcc_s.so.1", 0x7ffdd86e3eb0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "libgcc_s.so.1", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so.1", 0x7ffdd86e3eb0) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc_s.so.1", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libgcc_s.so.1", {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libgcc_s.so.1", O_RDONLY) = 17
[pid 2383523] fcntl(17, F_GETFD)        = 0
[pid 2383523] fcntl(17, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] read(17, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(17, 0, SEEK_SET)    = 0
[pid 2383523] read(17, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(17, 143360, SEEK_SET) = 143360
[pid 2383523] read(17, "\340=\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\00000\0\0\0\0\0\0"..., 4096) = 2640
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(17, 146000, SEEK_SET) = 146000
[pid 2383523] lseek(17, 146000, SEEK_SET) = 146000
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(17, 0, SEEK_SET)    = 0
[pid 2383523] read(17, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(17, 143360, SEEK_SET) = 143360
[pid 2383523] read(17, "\340=\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\00000\0\0\0\0\0\0"..., 4096) = 2640
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(17, 0, SEEK_SET)    = 0
[pid 2383523] read(17, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/libgcc_s.so.1", O_RDONLY) = 23
[pid 2383523] fstat(23, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(23, 0, SEEK_SET)    = 0
[pid 2383523] read(23, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(23, 0, SEEK_SET)    = 0
[pid 2383523] read(23, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(23, 144208, SEEK_SET) = 144208
[pid 2383523] read(23, "\v\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0\250\2\0\0\0\0\0\0\250\2\0\0\0\0\0\0"..., 1792) = 1792
[pid 2383523] lseek(23, 143868, SEEK_SET) = 143868
[pid 2383523] read(23, "\0.shstrtab\0.note.gnu.property\0.n"..., 274) = 274
[pid 2383523] lseek(23, 144208, SEEK_SET) = 144208
[pid 2383523] read(23, "\v\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0\250\2\0\0\0\0\0\0\250\2\0\0\0\0\0\0"..., 1792) = 1792
[pid 2383523] lseek(23, 143868, SEEK_SET) = 143868
[pid 2383523] read(23, "\0.shstrtab\0.note.gnu.property\0.n"..., 274) = 274
[pid 2383523] close(23)                 = 0
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(17, 139264, SEEK_SET) = 139264
[pid 2383523] read(17, "\360\0\0\0\0E\16\20\206\2C\r\6D\217\3\216\4E\215\5I\214\6H\203\7\2\315\f\7\10"..., 4096) = 4096
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(17, 4096, SEEK_SET) = 4096
[pid 2383523] read(17, "\0\0\0\0\0\0\0\0T\5\0\0\22\0\17\0\360A\1\0\0\0\0\0\n\1\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] read(17, "_extendxftf2\0__extendbfsf2\0__tru"..., 4096) = 4096
[pid 2383523] lseek(17, 0, SEEK_SET)    = 0
[pid 2383523] read(17, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\3006\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] read(17, "\0\0\0\0\0\0\0\0T\5\0\0\22\0\17\0\360A\1\0\0\0\0\0\n\1\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(17, {st_mode=S_IFREG|0644, st_size=146000, ...}) = 0
[pid 2383523] lseek(17, 8192, SEEK_SET) = 8192
[pid 2383523] read(17, "_extendxftf2\0__extendbfsf2\0__tru"..., 4096) = 4096
[pid 2383523] lseek(17, 12288, SEEK_SET) = 12288
[pid 2383523] lseek(17, 12288, SEEK_SET) = 12288
[pid 2383523] brk(0x55df66133000)       = 0x55df66133000
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.so", 0x7ffdd86e3e60) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.so", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.a", {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/libgcc.a", O_RDONLY) = 23
[pid 2383523] fcntl(23, F_GETFD)        = 0
[pid 2383523] fcntl(23, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(23, {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] read(23, "!<arch>\n/               0       "..., 4096) = 4096
[pid 2383523] lseek(23, -4088, SEEK_CUR) = 8
[pid 2383523] read(23, "/               0           0   "..., 4096) = 4096
[pid 2383523] read(23, "0_to_bid32\0__binary128_to_bid32\0"..., 8192) = 8192
[pid 2383523] read(23, "_14\0__avx_resms64f_13\0__avx_resm"..., 4096) = 4096
[pid 2383523] lseek(23, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(23, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(23, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(23, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(23, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(23, 16392, SEEK_SET) = 16392
[pid 2383523] lseek(23, 16392, SEEK_SET) = 16392
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/crtendS.o", {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/crtendS.o", O_RDONLY) = 24
[pid 2383523] fcntl(24, F_GETFD)        = 0
[pid 2383523] fcntl(24, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] read(24, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 1360
[pid 2383523] lseek(24, 0, SEEK_SET)    = 0
[pid 2383523] read(24, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 1360
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(24, 1360, SEEK_SET) = 1360
[pid 2383523] lseek(24, 1360, SEEK_SET) = 1360
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(24, 1360, SEEK_SET) = 1360
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(24, 1360, SEEK_SET) = 1360
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/crtendS.o", O_RDONLY) = 26
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(26, 0, SEEK_SET)    = 0
[pid 2383523] read(26, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(26, 0, SEEK_SET)    = 0
[pid 2383523] read(26, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(26, 656, SEEK_SET)  = 656
[pid 2383523] read(26, "\33\0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 704) = 704
[pid 2383523] lseek(26, 478, SEEK_SET)  = 478
[pid 2383523] read(26, "\0.symtab\0.strtab\0.shstrtab\0.text"..., 114) = 114
[pid 2383523] lseek(26, 656, SEEK_SET)  = 656
[pid 2383523] read(26, "\33\0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 704) = 704
[pid 2383523] lseek(26, 478, SEEK_SET)  = 478
[pid 2383523] read(26, "\0.symtab\0.strtab\0.shstrtab\0.text"..., 114) = 114
[pid 2383523] close(26)                 = 0
[pid 2383523] lseek(24, 1360, SEEK_SET) = 1360
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] stat("/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/crtn.o", {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/crtn.o", O_RDONLY) = 26
[pid 2383523] fcntl(26, F_GETFD)        = 0
[pid 2383523] fcntl(26, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] read(26, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 760
[pid 2383523] lseek(26, 0, SEEK_SET)    = 0
[pid 2383523] read(26, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 760
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] lseek(26, 760, SEEK_SET)  = 760
[pid 2383523] lseek(26, 760, SEEK_SET)  = 760
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] lseek(26, 760, SEEK_SET)  = 760
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] lseek(26, 760, SEEK_SET)  = 760
[pid 2383523] openat(AT_FDCWD, "/usr/lib/gcc/x86_64-linux-gnu/9/../../../x86_64-linux-gnu/crtn.o", O_RDONLY) = 27
[pid 2383523] fstat(27, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] lseek(27, 0, SEEK_SET)    = 0
[pid 2383523] read(27, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0", 16) = 16
[pid 2383523] lseek(27, 0, SEEK_SET)    = 0
[pid 2383523] read(27, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\1\0>\0\1\0\0\0\0\0\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(27, 248, SEEK_SET)  = 248
[pid 2383523] read(27, "\v\0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 512) = 512
[pid 2383523] lseek(27, 106, SEEK_SET)  = 106
[pid 2383523] read(27, "\0.shstrtab\0.text\0.data\0.bss\0.not"..., 75) = 75
[pid 2383523] lseek(27, 248, SEEK_SET)  = 248
[pid 2383523] read(27, "\v\0\0\0\1\0\0\0\6\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 512) = 512
[pid 2383523] lseek(27, 106, SEEK_SET)  = 106
[pid 2383523] read(27, "\0.shstrtab\0.text\0.data\0.bss\0.not"..., 75) = 75
[pid 2383523] close(27)                 = 0
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en_US.UTF-8/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en_US.utf8/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en_US/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en.UTF-8/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en.utf8/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale/en/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.UTF-8/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US.utf8/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en_US/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en.UTF-8/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en.utf8/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] openat(AT_FDCWD, "/usr/share/locale-langpack/en/LC_MESSAGES/bfd.mo", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383523] stat("/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2", {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] openat(AT_FDCWD, "/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2", O_RDONLY) = 27
[pid 2383523] fcntl(27, F_GETFD)        = 0
[pid 2383523] fcntl(27, F_SETFD, FD_CLOEXEC) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] read(27, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\21\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(27, 188416, SEEK_SET) = 188416
[pid 2383523] read(27, "\3\0\0\0stapsdt\0\321?\0\0\0\0\0\0\273\215\2\0\0\0\0\0\0\0\0\0"..., 4096) = 3088
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(27, 191504, SEEK_SET) = 191504
[pid 2383523] lseek(27, 191504, SEEK_SET) = 191504
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(27, 0, SEEK_SET)    = 0
[pid 2383523] read(27, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\21\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(27, 188416, SEEK_SET) = 188416
[pid 2383523] read(27, "\3\0\0\0stapsdt\0\321?\0\0\0\0\0\0\273\215\2\0\0\0\0\0\0\0\0\0"..., 4096) = 3088
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(27, 0, SEEK_SET)    = 0
[pid 2383523] read(27, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\21\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(27, 184320, SEEK_SET) = 184320
[pid 2383523] read(27, "h\336\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\20\20\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] read(27, "\3\0\0\0stapsdt\0\321?\0\0\0\0\0\0\273\215\2\0\0\0\0\0\0\0\0\0"..., 4096) = 3088
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] fstat(8, {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] fstat(16, {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] fstat(26, {st_mode=S_IFREG|0644, st_size=760, ...}) = 0
[pid 2383523] fstat(11, {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] fstat(12, {st_mode=S_IFREG|0755, st_size=2029592, ...}) = 0
[pid 2383523] fstat(14, {st_mode=S_IFREG|0644, st_size=23930, ...}) = 0
[pid 2383523] fstat(23, {st_mode=S_IFREG|0644, st_size=3045214, ...}) = 0
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(27, 180224, SEEK_SET) = 180224
[pid 2383523] read(27, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(27, {st_mode=S_IFREG|0755, st_size=191504, ...}) = 0
[pid 2383523] lseek(27, 0, SEEK_SET)    = 0
[pid 2383523] read(27, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\0\21\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(27, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(27, 4096, SEEK_SET) = 4096
[pid 2383523] lseek(27, 4096, SEEK_SET) = 4096
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] fstat(5, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(5, 1360, SEEK_SET)  = 1360
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] fstat(6, {st_mode=S_IFREG|0644, st_size=2928, ...}) = 0
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] lseek(24, 1360, SEEK_SET) = 1360
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] fstat(4, {st_mode=S_IFREG|0644, st_size=1912, ...}) = 0
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] fstat(7, {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(14, 4104, SEEK_SET) = 4104
[pid 2383523] lseek(24, 1360, SEEK_SET) = 1360
[pid 2383523] fstat(24, {st_mode=S_IFREG|0644, st_size=1360, ...}) = 0
[pid 2383523] lseek(24, 1360, SEEK_SET) = 1360
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=0, ...}) = 0
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "", 64)           = 0
[pid 2383523] lseek(3, 64, SEEK_CUR)    = 64
[pid 2383523] write(3, "\6\0\0\0\4\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0@\0\0\0\0\0\0\0"..., 728) = 728
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 792
[pid 2383523] lseek(3, 32, SEEK_CUR)    = 824
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] write(3, "\4\0\0\0\20\0\0\0\5\0\0\0GNU\0\2\0\0\300\4\0\0\0\3\0\0\0\0\0\0\0", 32) = 32
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 856
[pid 2383523] lseek(3, 36, SEEK_CUR)    = 892
[pid 2383523] write(3, "\4\0\0\0\20\0\0\0\1\0\0\0GNU\0\0\0\0\0\3\0\0\0\2\0\0\0\0\0\0\0", 32) = 32
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] read(3, "", 4096)         = 0
[pid 2383523] lseek(3, 96, SEEK_CUR)    = 4192
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] write(3, "\363\17\36\3721\355I\211\321^H\211\342H\203\344\360PTL\215\5f\1\0\0H\215\r\357\0\0"..., 47) = 47
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] write(3, "\1\0\2\0", 4)   = 4
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0", 4096) = 4
[pid 2383523] lseek(3, 76, SEEK_CUR)    = 8272
[pid 2383523] lseek(4, 1912, SEEK_SET)  = 1912
[pid 2383523] write(3, "\24\0\0\0\0\0\0\0\1zR\0\1x\20\1\33\f\7\10\220\1\0\0\24\0\0\0\34\0\0\0"..., 48) = 48
[pid 2383523] lseek(3, 12288, SEEK_SET) = 12288
[pid 2383523] lseek(5, 1360, SEEK_SET)  = 1360
[pid 2383523] write(3, "\0\0\0\0", 4)   = 4
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] lseek(5, 1360, SEEK_SET)  = 1360
[pid 2383523] write(3, "\363\17\36\372H\203\354\10H\213\5\331/\0\0H\205\300t\2\377\320", 22) = 22
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] read(3, "\363\17\36\372H\203\354\10H\213\5\331/\0\0H\205\300t\2\377\320\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -3608, SEEK_CUR) = 4584
[pid 2383523] write(3, "\363\17\36\372H\203\354\10", 8) = 8
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] read(3, "\363\17\36\372H\203\354\10H\213\5\331/\0\0H\205\300t\2\377\320\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -4074, SEEK_CUR) = 4118
[pid 2383523] write(3, "H\203\304\10\303", 5) = 5
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] read(3, "\363\17\36\372H\203\354\10H\213\5\331/\0\0H\205\300t\2\377\320H\203\304\10\303\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -3600, SEEK_CUR) = 4592
[pid 2383523] write(3, "H\203\304\10\303", 5) = 5
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] read(3, "\363\17\36\372H\203\354\10H\213\5\331/\0\0H\205\300t\2\377\320H\203\304\10\303\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] lseek(3, -3953, SEEK_CUR) = 4239
[pid 2383523] write(3, "\220H\215=y/\0\0H\215\5r/\0\0H9\370t\25H\213\5./\0\0H\205\300t\t"..., 186) = 186
[pid 2383523] lseek(3, 12288, SEEK_SET) = 12288
[pid 2383523] read(3, "\0\0\0\0", 4096) = 4
[pid 2383523] lseek(3, 4, SEEK_CUR)     = 12296
[pid 2383523] write(3, "\10@\0\0\0\0\0\0", 8) = 8
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -576, SEEK_CUR)  = 11712
[pid 2383523] write(3, "\0\21\0\0\0\0\0\0", 8) = 8
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(6, 2928, SEEK_SET)  = 2928
[pid 2383523] lseek(3, -584, SEEK_CUR)  = 11704
[pid 2383523] write(3, "@\21\0\0\0\0\0\0", 8) = 8
[pid 2383523] lseek(3, 12288, SEEK_SET) = 12288
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\10@\0\0\0\0\0\0", 4096) = 16
[pid 2383523] write(3, "GCC: (Ubuntu 9.4.0-1ubuntu1~20.0"..., 43) = 43
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] read(3, "\363\17\36\372H\203\354\10H\213\5\331/\0\0H\205\300t\2\377\320H\203\304\10\303\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(7, 1680, SEEK_SET)  = 1680
[pid 2383523] lseek(3, -3767, SEEK_CUR) = 4425
[pid 2383523] write(3, "\363\17\36\372UH\211\345H\215=\254\16\0\0\270\0\0\0\0\350\356\376\377\377\270\0\0\0\0]\303", 32) = 32
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -4092, SEEK_CUR) = 8196
[pid 2383523] write(3, "Hello\0", 6)    = 6
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0Hello\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -3880, SEEK_CUR) = 8408
[pid 2383523] write(3, "\34\0\0\0\214\0\0\0i\360\377\377 \0\0\0\0E\16\20\206\2C\r\6W\f\7\10\0\0\0", 32) = 32
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] read(3, "\363\17\36\372H\203\354\10H\213\5\331/\0\0H\205\300t\2\377\320H\203\304\10\303\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -3735, SEEK_CUR) = 4457
[pid 2383523] write(3, "\17\37\200\0\0\0\0\363\17\36\372AWL\215=;,\0\0AVI\211\326AUI\211\365AT"..., 124) = 124
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0Hello\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(24, 1360, SEEK_SET) = 1360
[pid 2383523] lseek(3, -3848, SEEK_CUR) = 8440
[pid 2383523] write(3, "D\0\0\0\254\0\0\0p\360\377\377e\0\0\0\0F\16\20\217\2I\16\30\216\3E\16 \215\4"..., 96) = 96
[pid 2383523] lseek(3, 12288, SEEK_SET) = 12288
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\10@\0\0\0\0\0\0GCC: (Ubuntu 9.4"..., 4096) = 59
[pid 2383523] lseek(3, -55, SEEK_CUR)   = 12292
[pid 2383523] write(3, "\0\0\0\0", 4)   = 4
[pid 2383523] lseek(3, 12288, SEEK_SET) = 12288
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\10@\0\0\0\0\0\0GCC: (Ubuntu 9.4"..., 4096) = 59
[pid 2383523] lseek(3, 5, SEEK_CUR)     = 12352
[pid 2383523] write(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\3\0\1\0"..., 2073) = 2073
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0Hello\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -3968, SEEK_CUR) = 8320
[pid 2383523] write(3, "$\0\0\0004\0\0\0\230\357\377\377 \0\0\0\0\16\20F\16\30J\17\vw\10\200\0?\32:"..., 88) = 88
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -3304, SEEK_CUR) = 792
[pid 2383523] write(3, "/lib64/ld-linux-x86-64.so.2\0", 28) = 28
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -2828, SEEK_CUR) = 1268
[pid 2383523] write(3, "\0\0\0\0\2\0\2\0\0\0\0\0\2\0", 14) = 14
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -2808, SEEK_CUR) = 1288
[pid 2383523] write(3, "\1\0\1\0\1\0\0\0\20\0\0\0\0\0\0\0u\32i\t\0\0\2\0003\0\0\0\0\0\0\0", 32) = 32
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -3128, SEEK_CUR) = 968
[pid 2383523] write(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0?\0\0\0 \0\0\0"..., 300) = 300
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0Hello\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -568, SEEK_CUR)  = 11720
[pid 2383523] write(3, "\1\0\0\0\0\0\0\0\1\0\0\0\0\0\0\0\f\0\0\0\0\0\0\0\0\20\0\0\0\0\0\0"..., 496) = 496
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -3168, SEEK_CUR) = 928
[pid 2383523] write(3, "\2\0\0\0\6\0\0\0\1\0\0\0\6\0\0\0\0\0\201\0\0\0\0\0\6\0\0\0\0\0\0\0"..., 36) = 36
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] read(3, "\363\17\36\372H\203\354\10H\213\5\331/\0\0H\205\300t\2\377\320H\203\304\10\303\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -4064, SEEK_CUR) = 4128
[pid 2383523] write(3, "\3775\232/\0\0\362\377%\233/\0\0\17\37\0\363\17\36\372h\0\0\0\0\362\351\341\377\377\377\220", 32) = 32
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -2584, SEEK_CUR) = 1512
[pid 2383523] write(3, "\320?\0\0\0\0\0\0\7\0\0\0\2\0\0\0\0\0\0\0\0\0\0\0", 24) = 24
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -2752, SEEK_CUR) = 1344
[pid 2383523] write(3, "\300=\0\0\0\0\0\0\10\0\0\0\0\0\0\0\0\21\0\0\0\0\0\0\10@\0\0\0\0\0\0"..., 120) = 120
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0Hello\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -40, SEEK_CUR)   = 12248
[pid 2383523] write(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 40) = 40
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0Hello\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -72, SEEK_CUR)   = 12216
[pid 2383523] write(3, "\310=\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0000\20\0\0\0\0\0\0", 32) = 32
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] read(3, "\363\17\36\372H\203\354\10H\213\5\331/\0\0H\205\300t\2\377\320H\203\304\10\303\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -4032, SEEK_CUR) = 4160
[pid 2383523] write(3, "\363\17\36\372\362\377%\255/\0\0\17\37D\0\0\363\17\36\372\362\377%u/\0\0\17\37D\0\0", 32) = 32
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0Hello\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -3968, SEEK_CUR) = 8320
[pid 2383523] write(3, "$\0\0\0004\0\0\0\230\357\377\377 \0\0\0\0\16\20F\16\30J\17\vw\10\200\0?\32:"..., 88) = 88
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -2776, SEEK_CUR) = 1320
[pid 2383523] write(3, "\270=\0\0\0\0\0\0\10\0\0\0\0\0\0\0@\21\0\0\0\0\0\0", 24) = 24
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -2632, SEEK_CUR) = 1464
[pid 2383523] write(3, "\360?\0\0\0\0\0\0\6\0\0\0\5\0\0\0\0\0\0\0\0\0\0\0\370?\0\0\0\0\0\0"..., 48) = 48
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0Hello\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] lseek(3, -4084, SEEK_CUR) = 8204
[pid 2383523] write(3, "\1\33\3;@\0\0\0\7\0\0\0\24\360\377\377t\0\0\0004\360\377\377\234\0\0\0D\360\377\377"..., 68) = 68
[pid 2383523] lseek(3, 12288, SEEK_SET) = 12288
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\10@\0\0\0\0\0\0GCC: (Ubuntu 9.4"..., 4096) = 2137
[pid 2383523] write(3, "\0.symtab\0.strtab\0.shstrtab\0.inte"..., 282) = 282
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] write(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0`\20\0\0\0\0\0\0"..., 64) = 64
[pid 2383523] lseek(3, 12288, SEEK_SET) = 12288
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\10@\0\0\0\0\0\0GCC: (Ubuntu 9.4"..., 4096) = 2419
[pid 2383523] lseek(3, 5, SEEK_CUR)     = 14712
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=14707, ...}) = 0
[pid 2383523] write(3, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"..., 1984) = 1984
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0`\20\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 4096, SEEK_SET)  = 4096
[pid 2383523] read(3, "\363\17\36\372H\203\354\10H\213\5\331/\0\0H\205\300t\2\377\320H\203\304\10\303\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 8192, SEEK_SET)  = 8192
[pid 2383523] read(3, "\1\0\2\0Hello\0\0\0\1\33\3;@\0\0\0\7\0\0\0\24\360\377\377t\0\0\0"..., 4096) = 4096
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 12288, SEEK_SET) = 12288
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 12288, SEEK_SET) = 12288
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] read(3, "\0\0\0\0\0\0\0\0\10@\0\0\0\0\0\0GCC: (Ubuntu 9.4"..., 4096) = 4096
[pid 2383523] fstat(3, {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] lseek(3, 0, SEEK_SET)     = 0
[pid 2383523] read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0`\20\0\0\0\0\0\0"..., 4096) = 4096
[pid 2383523] munmap(0x7f5c2ba20000, 135168) = 0
[pid 2383523] lseek(3, -3240, SEEK_CUR) = 856
[pid 2383523] write(3, "\4\0\0\0\24\0\0\0\3\0\0\0GNU\0B\240|C\f.\206\316\370\320\223:\260=@\212"..., 36) = 36
[pid 2383523] close(3)                  = 0
[pid 2383523] stat("a.out", {st_mode=S_IFREG|0644, st_size=16696, ...}) = 0
[pid 2383523] umask(000)                = 022
[pid 2383523] umask(022)                = 000
[pid 2383523] chmod("a.out", 0755)      = 0
[pid 2383523] close(24)                 = 0
[pid 2383523] close(7)                  = 0
[pid 2383523] close(6)                  = 0
[pid 2383523] close(26)                 = 0
[pid 2383523] close(5)                  = 0
[pid 2383523] close(4)                  = 0
[pid 2383523] close(14)                 = 0
[pid 2383523] close(27)                 = 0
[pid 2383523] close(23)                 = 0
[pid 2383523] close(12)                 = 0
[pid 2383523] close(11)                 = 0
[pid 2383523] close(16)                 = 0
[pid 2383523] close(8)                  = 0
[pid 2383523] close(17)                 = 0
[pid 2383523] close(15)                 = 0
[pid 2383523] close(9)                  = 0
[pid 2383523] munmap(0x7f5c2c0a4000, 95456) = 0
[pid 2383523] exit_group(0)             = ?
[pid 2383523] +++ exited with 0 +++
[pid 2383522] <... wait4 resumed>[{WIFEXITED(s) && WEXITSTATUS(s) == 0}], 0, NULL) = 2383523
[pid 2383522] --- SIGCHLD {si_signo=SIGCHLD, si_code=CLD_EXITED, si_pid=2383523, si_uid=1005, si_status=0, si_utime=4, si_stime=3} ---
[pid 2383522] stat("/home/wqy/OS_teaching/Overview/strace", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383522] stat(".", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
[pid 2383522] openat(AT_FDCWD, "/tmp/ccfvwPdV.ld", O_RDONLY) = 3
[pid 2383522] fstat(3, {st_mode=S_IFREG|0600, st_size=0, ...}) = 0
[pid 2383522] read(3, "", 4096)         = 0
[pid 2383522] close(3)                  = 0
[pid 2383522] unlink("/tmp/ccfvwPdV.ld") = 0
[pid 2383522] openat(AT_FDCWD, "/tmp/cclBbN6W.le", O_RDONLY) = 3
[pid 2383522] fstat(3, {st_mode=S_IFREG|0600, st_size=0, ...}) = 0
[pid 2383522] read(3, "", 4096)         = 0
[pid 2383522] close(3)                  = 0
[pid 2383522] unlink("/tmp/cclBbN6W.le") = 0
[pid 2383522] lstat("/tmp/ccuMnXAW.cdtor.c", {st_mode=S_IFREG|0600, st_size=0, ...}) = 0
[pid 2383522] unlink("/tmp/ccuMnXAW.cdtor.c") = 0
[pid 2383522] lstat("/tmp/ccOC2toW.cdtor.o", {st_mode=S_IFREG|0600, st_size=0, ...}) = 0
[pid 2383522] unlink("/tmp/ccOC2toW.cdtor.o") = 0
[pid 2383522] openat(AT_FDCWD, "/tmp/ccfvwPdV.ld", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] lstat("/tmp/ccfvwPdV.ld", 0x7ffcf1438a10) = -1 ENOENT (No such file or directory)
[pid 2383522] openat(AT_FDCWD, "/tmp/cclBbN6W.le", O_RDONLY) = -1 ENOENT (No such file or directory)
[pid 2383522] lstat("/tmp/cclBbN6W.le", 0x7ffcf1438a30) = -1 ENOENT (No such file or directory)
[pid 2383522] exit_group(0)             = ?
[pid 2383522] +++ exited with 0 +++
<... wait4 resumed>[{WIFEXITED(s) && WEXITSTATUS(s) == 0}], 0, NULL) = 2383522
--- SIGCHLD {si_signo=SIGCHLD, si_code=CLD_EXITED, si_pid=2383522, si_uid=1005, si_status=0, si_utime=0, si_stime=0} ---
stat("/tmp/cc9LRRnJ.res", {st_mode=S_IFREG|0600, st_size=0, ...}) = 0
unlink("/tmp/cc9LRRnJ.res")             = 0
stat("/tmp/ccW5PG7J.o", {st_mode=S_IFREG|0600, st_size=1680, ...}) = 0
unlink("/tmp/ccW5PG7J.o")               = 0
stat("/tmp/ccfYMhUK.s", {st_mode=S_IFREG|0600, st_size=661, ...}) = 0
unlink("/tmp/ccfYMhUK.s")               = 0
exit_group(0)                           = ?
+++ exited with 0 +++
