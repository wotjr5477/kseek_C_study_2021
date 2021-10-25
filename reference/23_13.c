#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

main()
{
    int pid, child_pid, status;

    if ((pid=fork()) == -1)
       perror("fork failed");
    /* �θ� ���μ��� */
    else if (pid != 0) {
       /* �ڽ� ���μ����� ����Ǳ⸦ ��ٸ� */
       pid = wait(&status);
       /* ���������� ����Ǹ� ���� �� */
       if (WIFEXITED(status))
          /* �ڽ� ���μ����� ���� �ڵ带 ��� */
          printf("child terminated with code %d\n", WEXITSTATUS(status)); 
       else
          printf("child terminated abnormally\n");
    /* �ڽ� ���μ��� */
    } else {
       printf("run child\n");
       exit(27);   /* �ڽ� ���μ����� ���� �ڵ� 27�� ��ȯ�ϰ� ���� */
    }
}