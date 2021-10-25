#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signalHandler(int signo);
int signal_count=0;

main() 
{ 
    struct sigaction new_act;
    struct sigaction old_act;

    new_act.sa_handler = signalHandler;
    /* new_act.sa_mask�� �ñ׳��� ó���ϴ� ���� ��Ͻ�ų �ñ׳��� ��� ����
      �ñ׳� �����ε�, �ñ׳� ������ ������Ƿ� ��� �ñ׳��� ��ϵ��� ���� */
    sigemptyset(&new_act.sa_mask);
    new_act.sa_flags = 0;
    /* SIGINT�� ���� new_act�� �����ϴµ�, ȣ���ϱ� �� �ൿ ������ old_act�� ���� */
    sigaction(SIGINT, &new_act, &old_act);

    while(1) { 
       printf("waiting signal\n"); 
       sleep(1);
       if (signal_count == 3)
          /* SIGINT�� ���� old_act(���� �ൿ)�� ���� */
          sigaction(SIGINT, &old_act, NULL); 
    } 
}

void signalHandler(int signo)
{
    signal_count++;
    printf("Hi! signal %d\n", signal_count);
}