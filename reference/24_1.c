#include <stdio.h>
#include <signal.h>

main()
{
    /* �ñ׳� ������ ���������� sigset_t */
    sigset_t set;

    /* �� �ñ׳� ���� set ���� */
    if (sigemptyset(&set) == -1) {
       perror("sigemptyset failed");
       exit(1);
    }
    /* set�� SIGINT �߰� */
    if (sigaddset(&set, SIGINT) == -1) {
       perror("sigaddset failed");
       exit(1);
    }
    /* SIGINT�� set�� ���ϴ����� Ȯ�� */
    if (sigismember(&set, SIGINT))
       printf("SIGINT is a member\n");
    else
       printf("SIGINT is not a member\n");
    exit(0);
}