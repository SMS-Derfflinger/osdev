#ifndef __GBLIBC_SIGNAL_H_
#define __GBLIBC_SIGNAL_H_

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SIGHUP    1
#define SIGINT    2
#define SIGQUIT   3
#define SIGILL    4
#define SIGTRAP   5
#define SIGABRT   6
#define SIGIOT    SIGABRT
#define SIGBUS    7
#define SIGFPE    8
#define SIGKILL   9
#define SIGUSR1   10
#define SIGSEGV   11
#define SIGUSR2   12
#define SIGPIPE   13
#define SIGALRM   14
#define SIGTERM   15
#define SIGSTKFLT 16
#define SIGCHLD   17
#define SIGCONT   18
#define SIGSTOP   19
#define SIGTSTP   20
#define SIGTTIN   21
#define SIGTTOU   22
#define SIGURG    23
#define SIGXCPU   24
#define SIGXFSZ   25
#define SIGVTALRM 26
#define SIGPROF   27
#define SIGWINCH  28
#define SIGIO     29
#define SIGPOLL   29
#define SIGPWR    30
#define SIGSYS    31
#define SIGUNUSED SIGSYS
#define SIGRTMIN  32
#define SIGRTMAX  64

#define SIG_BLOCK 0
#define SIG_UNBLOCK 1
#define SIG_SETMASK 2

#define SA_RESTORER 0x04000000
#define SA_ONSTACK  0x08000000
#define SA_RESTART  0x10000000
#define SA_NODEFER  0x40000000

#define SIG_DFL ((sighandler_t)0)
#define SIG_IGN ((sighandler_t)1)

typedef void (*sighandler_t)(int);
typedef void (*sigrestorer_t)(void);

int kill(pid_t pid, int sig);
int raise(int sig);

#ifdef __cplusplus
}
#endif

#endif
