/*
 *  THIS FILE IS AUTOMATICALLY CREATED BY configure!
 *  DON'T EDIT THIS FILE MANUALLY, IT WILL BE OVERWRITTEN.
 */

#ifndef CONFIG_H
#define CONFIG_H

#define VERSION "0.6.3.1"
#define WITHUNITTESTS
#define COMPILE_DATE "compiled on Linux/x86_64, Sat 30 Sep 2023 04:54:18 AM UTC"
#define ADD_ALL_CPU_FAMILIES     add_cpu_family(alpha_cpu_family_init, ARCH_ALPHA); add_cpu_family(arm_cpu_family_init, ARCH_ARM); add_cpu_family(m88k_cpu_family_init, ARCH_M88K); add_cpu_family(mips_cpu_family_init, ARCH_MIPS); add_cpu_family(ppc_cpu_family_init, ARCH_PPC); add_cpu_family(sh_cpu_family_init, ARCH_SH);
#define WITH_X11
#define strlcpy mystrlcpy
#define strlcat mystrlcat
#define USE_STRLCPY_REPLACEMENTS
#define HAVE___FUNCTION__
#define likely(x) __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)
#define HOST_LITTLE_ENDIAN

#undef mips

#endif  /*  CONFIG_H  */
