#include <stdio.h>
#include <signal.h>
#include <unistd.h>

main()
{
    /* SIGINT �ñ׳� ������ �����ϵ��� ���� */
    signal(SIGINT, SIG_IGN);
    while (1) {
       printf("Hello World\n");
       sleep(1);   /* 1�� ���� ���� */
    }
}