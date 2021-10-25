#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

main()
{
    int pid, child_pid, status;

    /* ù ��° �ڽ� ���μ��� ���� */
    if ((pid=fork()) == -1) 
       perror("fork failed");
    /* �θ� ���μ��� */
    else if (pid != 0) {
       /* �� ��° �ڽ� ���μ��� ���� */
       if ((pid=fork()) == -1)
          perror("fork failed");
       /* �θ� ���μ��� */
       else if (pid != 0) {
          /* �ƹ� �ڽ� ���μ����� ����Ǳ⸦ ��ٸ�.
            ���� �ڽ� ���μ����� �ִٸ� �ƹ� ���μ����� ����Ǳ⸦ ��ٸ� */
          child_pid = wait(&status);
          printf("child[pid:%d] terminated with code %x\n", child_pid, status);
       /* �� ��° �ڽ� ���μ��� */
       } else {
          printf("run child2[pid:%u]\n", getpid());
          exit(3);
       }
    /* ù ��° �ڽ� ���μ��� */
    } else {
       printf("run child1[pid:%u]\n", getpid());
       exit(2);
    }
}