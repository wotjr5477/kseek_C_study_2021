#include <stdio.h>
#include <signal.h>
#include <unistd.h>

main() 
{ 
    struct sigaction act;

    /* �ñ׳ο� ���� � ������ �� ������ �����ϴ� �������� 
      �ñ׳��� �����ϵ��� �ϴ� SIG_IGN�� ���� */
    act.sa_handler = SIG_IGN;
    /* act.sa_mask�� �ñ׳��� ó���ϴ� ���� ��Ͻ�ų �ñ׳��� ��� ����
      �ñ׳� �����ε�, �ñ׳� ������ ������Ƿ� ��� �ñ׳��� ��ϵ��� ���� */
    sigemptyset(&act.sa_mask);
    /* �ɼ��� �������� ���� */
    act.sa_flags = 0;
    /* SIGINT�� ���� act �ൿ�� �ϵ��� ���� */
    sigaction(SIGINT, &act, NULL);

    while(1) { 
       printf("Hello World\n"); 
       sleep(1); 
    } 
}