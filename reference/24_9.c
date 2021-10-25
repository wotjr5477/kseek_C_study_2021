#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signalHandler(int signo);

main() 
{ 
    struct sigaction act;

    /* �ñ׳� ���� signalHandler�� �����ϵ��� ���� */
    act.sa_handler = signalHandler;
    sigfillset(&act.sa_mask);
    /* �ñ׳��� ó���ϴ� ���ȿ� ���޵Ǵ� �ñ׳��� ��ϵ��� �ʵ��� �ϴ� �ɼ� ���� */
    act.sa_flags = SA_NOMASK;
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