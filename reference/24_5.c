#include <stdio.h>
#include <signal.h>
#include <unistd.h>

main()
{
    int count=0;

    /* SIGINT �ñ׳� ������ �����ϵ��� ���� */
    signal(SIGINT, SIG_IGN);
    while (1) {
       printf("Hello World\n");
       sleep(1);
       if (++count == 5)   /* count�� 5�� �Ǹ� */
          /* SIGINT �ñ׳� ������ �ý��ۿ��� �⺻������ ������ ������ �ϵ��� ���� */
          signal(SIGINT, SIG_DFL);
    }
}