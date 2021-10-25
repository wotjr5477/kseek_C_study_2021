#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

main()
{
    pid_t pid;
 
    if ((pid=fork()) == -1)
       perror("fork failed");
    /* �θ� ���μ����� �ڽŰ� �ڽ� ���μ����� ���μ��� ID ��� */
    else if (pid != 0)
       /* getpid�� �ڽ��� ���μ��� ID�� ��ȯ�ϴ� �Լ� */
       printf("PID is %ld, child process pid is %ld\n", getpid(), pid);
    /* �ڽ� ���μ����� �ڽŰ� �θ� ���μ����� ���μ��� ID ��� */
    else
       /* getppid�� �θ� ���μ����� ���μ��� ID�� ��ȯ�ϴ� �Լ� */
       printf("PID is %ld, parent process pid is %ld\n", getpid(), getppid());
}