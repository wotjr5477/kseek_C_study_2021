#include <stdio.h>
#include <signal.h>
#include <unistd.h>

main() 
{ 
    sigset_t set1, set2;

    /* �� �� �ñ׳� ���� set1 ���� */
    sigfillset(&set1);
    sigemptyset(&set2);
    /* SIGINT�� ���ҷ� �ϴ� �ñ׳� ���� set2 */
    sigaddset(&set2, SIGINT);

    /* ��� �ñ׳ο� ��� ���� */
    sigprocmask(SIG_BLOCK, &set1, NULL);
    printf("block start\n");
    sleep(10);
    /* SIGINT �ñ׳��� ��Ͽ��� ���� */
    sigprocmask(SIG_UNBLOCK, &set2, NULL);
    printf("SIGINT unblock\n");
    while(1) {
       printf("Hello World\n");
       sleep(2);
    }
}