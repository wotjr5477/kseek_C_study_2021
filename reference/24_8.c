#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signalHandler(int signo);

main() 
{ 
    struct sigaction act;

    /* �ñ׳��� ���� signalHandler�� �����ϵ��� ���� */
    act.sa_handler = signalHandler;
    /* ��� �ñ׳��� �ñ׳��� ó���ϴ� ���� ��ϵǵ��� ���� */
    sigfillset(&act.sa_mask);
    act.sa_flags = 0;
    /* SIGINT�� ���� act �ൿ�� �ϵ��� ���� */
    sigaction(SIGINT, &act, NULL);
    printf("call sigaction\n");
    while(1)
       sleep(5);
}

void signalHandler(int signo)
{
    printf("start handler\n");
    sleep(3);
    printf("end handler\n");
}