#include <stdio.h>
#include <signal.h>

main()
{
    sigset_t set;

    /* ��� �ñ׳��� �����ϴ� �ñ׳� ���� set ���� */
    if (sigfillset(&set) == -1) {
       perror("sigfillset failed");
       exit(1);
    }
    /* set���� SIGPIPE ���� */
    if (sigdelset(&set, SIGPIPE) == -1) {
       perror("sigdelset failed");
       exit(1);
    }
    /* SIGPIPE�� set�� ���ϴ����� Ȯ�� */
    if (sigismember(&set, SIGPIPE))
       printf("SIGPIPE is a member\n");
    else
       printf("SIGPIPE is not a member\n");
    exit(0);
}