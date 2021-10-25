#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

main()
{
    pid_t pid;

    /* vfork�� �̿��� �ڽ� ���μ��� ���� */
    if ((pid=vfork()) == -1)
       perror("fork failed");
    /* �θ� ���μ����� �ڽ� ���μ����� exit ȣ���� �� �Ŀ� ���� */
    else if (pid != 0)
       printf("PID is %ld, child process pid is %ld\n", getpid(), pid);
    /* �ڽ� ���μ����� ��ٷ� ���� */
    else {
       printf("PID is %ld, parent process pid is %ld\n", getpid(), getppid());
       exit(0);
    }
}