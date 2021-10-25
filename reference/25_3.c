#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>

main(int argc, char *argv[])
{
    int fd;
    struct flock filelock;

    filelock.l_type = F_WRLCK;   /* ���� ��� */
    filelock.l_whence = SEEK_SET;   /* ������ ������ �������� */
    filelock.l_start = 0;   /* ������ ó������ */

    fd = open(argv[1], O_RDWR);   /* agrv[1] ���� ���� */

    /* fork�� ���� �ڽ� ���μ����� ���� */
    switch(fork()) {
       /* fork ȣ�⿡ �����ϸ� */
       case -1:
          perror("fork failed");
          exit(1);
       /* �ڽ� ���μ����� */
       case 0:
          filelock.l_len = 5;   /* 5����Ʈ ũ�⿡ ���� */
          /* fd ���Ͽ� ���� ���ڵ� ����� ����.
            �̹� ���ڵ� ����� �����Ǿ� ������ ������ ������ ��ٸ� */
          if(fcntl(fd, F_SETLKW, &filelock) == -1) {
             perror("fcntl failed");
             exit(1);
          }
          printf("child process: locked\n");
          sleep(3);
          /* ���ڵ� ����� ���� */
          filelock.l_type = F_UNLCK;
          if(fcntl(fd, F_SETLK, &filelock) == -1) {
             perror("fcntl failed");
             exit(1);
          }
          printf("child process: unlocked\n");
          break;
       /* �θ� ���μ����� */
       default:
          filelock.l_len = 10;   /* 10����Ʈ ũ�⿡ ���� */
          /* fd ���Ͽ� ���� ���ڵ� ����� ���� */
          if(fcntl(fd, F_SETLKW, &filelock) == -1) {
             perror("fcntl failed");
             exit(1);
          }
          printf("parent process: locked\n");
          sleep(3);
          /* ���ڵ� ����� ���� */
          filelock.l_type = F_UNLCK;
          if(fcntl(fd, F_SETLK, &filelock) == -1) {
             perror("fcntl failed");
             exit(1);
          }
          printf("parent process: unlocked\n");
          /* �ڽ� ���μ����� ����� ������ ��ٸ� */
          wait(NULL);
    }
    exit(0);
}