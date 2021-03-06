#include <stdio.h>
#include <signal.h>
#include <unistd.h>

main() 
{ 
    sigset_t set, oldset;

    sigemptyset(&set);
    sigaddset(&set, SIGINT);

    /* SIGINT에 대해 블록 설정하고 이전 블록화 된 시그널 집합을 oldset에 저장 */
    sigprocmask(SIG_BLOCK, &set, &oldset);
    printf("block start\n");
    sleep(10);
    /* oldset의 시그널들이 블록화 된 시그널 집합으로 교체 */
    sigprocmask(SIG_SETMASK, &oldset, NULL);
    printf("restore to the original state\n");
    while(1) {
       printf("Hello World\n");
       sleep(2);
    }
}