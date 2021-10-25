#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

main()
{
    int pid, child_pid, status;
 
    if ((pid=fork()) == -1)
       perror("fork failed");
    /* �θ� ���μ����� �ڽ� ���μ����� ����� ������ �ƹ� �� ���� �ʰ� ��ٸ� */
    else if (pid != 0) {
       /* wait�� ȣ���Ͽ� �ڽ� ���μ����� ������ ������ ��ٸ�. 
        �ڽ� ���μ����� ����Ǹ� �ڽ� ���μ����� ���μ��� ID��
        child_pid�� ����ǰ�, ����� ���� ���� ������ status�� ����� */
       child_pid = wait(&status);
       /* status�� 16���� ���·� ���. ���� ����� 300�� ���� 8��Ʈ�� 0�̰�
         ���� 8��Ʈ�� 3�̶�� ���̹Ƿ� ���� �����̸鼭 exit(no)�� no�� 3�̶�� �ǹ� */
       printf("child[pid:%d] terminated with code %x\n", child_pid, status);
    /* �ڽ� ���μ����� ����ϰ� exit�� ���� ���� */
    } else {
       printf("run child\n");
       /* exit(3)�� ���� 3�� ��ȯ�ϰ� �����ϴµ� �� 3�̶�� ���� �θ� ���μ�����
         status�� ���� 8��Ʈ�� ���� */
       exit(3);
    }
}