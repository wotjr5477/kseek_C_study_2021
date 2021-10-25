#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

main()
{
    int pid1, pid2, child_pid, status;

    /* ù ��° �ڽ� ���μ��� ���� */
    if ((pid1=fork()) == -1)
       perror("fork failed");
    /* �θ� ���μ��� */
    else if (pid1 != 0) {
       /* �� ��° �ڽ� ���μ��� ���� */
       if ((pid2=fork()) == -1)
          perror("fork failed");
       /* �θ� ���μ��� */
       else if (pid2 != 0) {
          /* pid1 ���μ����� ����Ǳ⸦ ��ٸ� */
          child_pid = waitpid(pid1, &status, 0);
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