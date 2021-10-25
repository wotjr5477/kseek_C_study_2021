#include <stdio.h>
#include <signal.h>
#include <unistd.h>

main() 
{ 
    sigset_t set, oldset;

    sigemptyset(&set);
    sigaddset(&set, SIGINT);

    /* SIGINT�� ���� ��� �����ϰ� ���� ���ȭ �� �ñ׳� ������ oldset�� ���� */
    sigprocmask(SIG_BLOCK, &set, &oldset);
    printf("block start\n");
    sleep(10);
    /* oldset�� �ñ׳ε��� ���ȭ �� �ñ׳� �������� ��ü */
    sigprocmask(SIG_SETMASK, &oldset, NULL);
    printf("restore to the original state\n");
    while(1) {
       printf("Hello World\n");
       sleep(2);
    }
}