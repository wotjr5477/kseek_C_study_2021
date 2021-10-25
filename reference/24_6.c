#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signalHandler(int signo);

main()
{
    /* SIGINT �ñ׳� ������ signalHandler �����ϵ��� ���� */
    signal(SIGINT, signalHandler);
    while(1) {
       printf("Hello World\n");
       sleep(1);
    }
}

void signalHandler(int signo)
{
    printf("Hi! signal %d\n", signo);  /* signo�� �ñ׳� ��ȣ */
    /* SIGINT �ñ׳� ������ �ý��ۿ��� �⺻������ ������ ������ �ϵ��� ���� */
    signal(SIGINT, SIG_DFL);
}