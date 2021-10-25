#include <stdio.h>
#include <unistd.h>
#define SIZE 4

main()
{
    char *arg[3] = {"abc", "def", "ghi"};
    char buffer[SIZE];
    int pipes[2], i;

    /* �������� ���� */
    if(pipe(pipes) == -1) {
       perror("pipe failed");
       exit(1);
    }

    /* �θ� ���μ����� */
    if(fork()) {
       /* �������� �б� ���� �ĺ��� �ݱ� */
       close(pipes[0]);
       for(i=0; i<3; i++) {
          /* �������� arg[i]�� ���� */
          write(pipes[1], arg[i], SIZE);
          printf("parent process write to pipe: %s\n", arg[i]);
       }
    /* �ڽ� ���μ����� */
    } else {
       /* �������� ���� ���� �ĺ��� �ݱ� */
       close(pipes[1]);
       for(i=0; i<3; i++) {
          /* �������κ��� �б� */
          read(pipes[0], buffer, SIZE);
          printf("child process read from pipe: %s\n", buffer);
       }
    }
    exit(0);
}