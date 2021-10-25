#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

main()
{
    pid_t pid;

    if ((pid=fork()) == -1) {
       perror("fork failed");
       exit(1);  /* fork ȣ�⿡ �����ϸ� 1�� ��ȯ�ϰ� ���� */
    } else if (pid != 0) {
       printf("parent process\n");
       exit(2);  /* �θ� ���μ����� 2�� ��ȯ�ϰ� ���� */
    } else {
       printf("child process\n");
       exit(3);  /* �ڽ� ���μ����� 3�� ��ȯ�ϰ� ���� */
    }
}