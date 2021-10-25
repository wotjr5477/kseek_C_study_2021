#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void alarmHandler(int signo);

main() 
{ 
    int status; 
    struct sigaction act;

    /* �ñ׳ο� ���� alarmHandler�� ����ǵ��� ���� */
    act.sa_handler = alarmHandler;
    sigemptyset(&act.sa_mask);
    act.sa_flags = 0;
    /* SIGALRM�� ���� act �ൿ�� �ϵ��� ���� */
    sigaction(SIGALRM, &act, NULL);
    /* 3�� �Ŀ� SIGALRM �ñ׳��� �ڽſ��� ���� */
    alarm(3);
    while(1)   /* ���� �ݺ� */
       ;
}

void alarmHandler(int signo)
{
    printf("Hi! signal %d\n", signo);
    exit(0);
}