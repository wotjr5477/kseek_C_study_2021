#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signalHandler(int signo);

main() 
{ 
    sigset_t set, oldset; 
    struct sigaction act;

    act.sa_handler = signalHandler;
    sigemptyset(&act.sa_mask);
    act.sa_flags = 0;
    /* SIGINT�� ���� act �ൿ�� �ϵ��� ���� */
    sigaction(SIGINT, &act, NULL);

    sigemptyset(&set); 
    sigaddset(&set, SIGINT); 

    /* SIGINT �ñ׳ο� ��� ���� */
    sigprocmask(SIG_BLOCK, &set, &oldset);
    sleep(10);
    /* oldset�� �ñ׳ε��� ���ȭ �� �ñ׳� �������� ��ü�Ǵµ� 
     �� ��Ȳ������ SIGINT �ñ׳ο� ���� ����� ���� */
    sigprocmask(SIG_SETMASK, &oldset, NULL);
    /* �ñ׳��� ������ ������ ������ �ߴ� */
    pause();
    exit(0);
}

void signalHandler(int signo)
{
    printf("Hi! signal %d\n", signo);
}