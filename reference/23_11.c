#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

main()
{
    int pid, status;
 
    if ((pid=fork()) == -1)
       perror("fork failed");
    /* �θ� ���μ��� */
    else if (pid != 0) {
       /* waitpid�� �� ��° �μ��� 0���� �����ϸ� �θ� ���μ����� �ڽ� ���μ����� 
         ����� ������ ���ȭ. �ڽ� ���μ����� ����Ǹ� �ڽ� ���μ����� ���μ���
         ID�� ��ȯ�ǹǷ� while ���� ��� */
       while (waitpid(pid, &status, 0)==0) {
          printf("still waiting\n");
          sleep(1);  /* 1�� ���� ������ �ߴ� */
       }
    /* �ڽ� ���μ��� */
    } else {
       printf("run child\n");
       sleep(5);
       exit(0);
    }
}