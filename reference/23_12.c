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
       /* �� ��° �μ��� WNOHANG���� �����Ͽ� ȣ���ϸ� �θ� ���μ�����
         �ڽ� ���μ����� ������� �ʴ��� ���ȭ ���� �ʰ� �ٸ� ���� ����.
         �ڽ� ���μ����� ������� ���� ���¿��� waitpid�� ��ȯ�ϴ� ���� 0 */
      while (waitpid(pid, &status, WNOHANG)==0) {
          printf("still waiting\n");
          sleep(1);
       }
    /* �ڽ� ���μ��� */
    } else {
       printf("run child\n");
       sleep(5);
       exit(0);
    }
}