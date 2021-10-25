#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#define SIZE 256

main()
{
    int pipes1[2], pipes2[2], length;
    char read_buffer[SIZE], write_buffer[SIZE];

    /* �� ���� ������ ���� */
    if(pipe(pipes1)==-1 || pipe(pipes2)==-1) {
       perror("pipe failed");
       exit(1);
    }
 
    /* �θ� ���μ����� */
    if(fork()) {
       /* pipes1�� ���� ���� �ĺ��� �ݱ� */
       close(pipes1[1]);
       /* pipes2�� �б� ���� �ĺ��� �ݱ� */
       close(pipes2[0]);

       /* pipes1 �������κ��� ������ �б� */
       if((length=read(pipes1[0], read_buffer, SIZE)) == -1) {
          perror("read failed");
          exit(1);
       }
       write(STDOUT_FILENO, "receive message: ", strlen("receive message: "));
       write(STDOUT_FILENO, read_buffer, length);

       sprintf(write_buffer, "Hi client!\n");
       /* pipes2 �������� ������ ���� */
       write(pipes2[1], write_buffer, strlen(write_buffer));

       /* �ڽ� ���μ����� ����Ǳ⸦ ��ٸ� */
       wait(NULL);
    /* �ڽ� ���μ����� */
    } else {
       /* pipes1�� �б� ���� �ĺ��� �ݱ� */
       close(pipes1[0]);
       /* pipes2�� ���� ���� �ĺ��� �ݱ� */
       close(pipes2[1]);

       sprintf(write_buffer, "Hi server!\n");
       /* pipes1 �������� ������ ���� */
       write(pipes1[1], write_buffer, strlen(write_buffer));

       /* pipes2 �������κ��� ������ �б� */
       if((length=read(pipes2[0], read_buffer, SIZE)) == -1) {
          perror("read failed");
          exit(1);
       }
       write(STDOUT_FILENO, "receive message: ", strlen("receive message: "));
       write(STDOUT_FILENO, read_buffer, length);
    }
    exit(0);
}