#include <stdio.h>
#include <signal.h>
#include <unistd.h>

main() 
{ 
    sigset_t set, pend;

    sigfillset(&set);
    /* 모든 시그널에 블록 설정 */
    sigprocmask(SIG_BLOCK, &set, NULL);

    while(1) {
       printf("Hello World\n");
       sleep(2);
       /* 블록 된 시그널 얻어 옴 */
       sigpending(&pend);
       /* SIGQUIT가 pend에 속해 있으면 종료 */
       if(sigismember(&pend, SIGQUIT))
          exit(0);
    }
}