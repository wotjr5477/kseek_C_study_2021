#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>

main(int argc, char *argv[]) 
{ 
    /* argv[1]�� ���μ����� SIGKILL �ñ׳� ���� */
    kill(atoi(argv[1]), SIGKILL);   /* argv[1]�� ���ڿ��̹Ƿ� ������ ��ȯ */
}