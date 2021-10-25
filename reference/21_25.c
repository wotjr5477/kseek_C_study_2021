#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int filestatus(int fd, char *file);

main(int argc, char *argv[])
{
    int fd, newfd, mode;

    /* argv[2]�� ����Ǿ� �ִ� ���� ������ ���ڿ��� ������ ��ȯ�Ͽ� mode�� ���� */
    mode = atoi(argv[2]);
    if ((fd = open(argv[1], mode)) == -1) {
       perror("open failed");
       exit(1);
    }
    if (filestatus(fd, argv[1]) == -1) {
       exit(2);
    }
    close(fd);
    exit(0);
}

int filestatus(int fd, char *file)
{
    int flag;

    /* ������ ���� ������ �˾Ƴ� flag�� ����. ���� ���� �� ���� ��Ʈ�� 00, 01, �Ǵ� 10 */
    if ((flag=fcntl(fd, F_GETFL)) == -1) {
       perror("fcntl failed");
       return -1;
    }
    /* O_ACCMODE�� 3�̹Ƿ� flag & O_ACCMODE ����� flag�� ���� ���� 
      �� ���� ��Ʈ�� 00�̸� 0, 01�̸� 1, 10�̸� 2�� �ȴ�. */
    switch (flag & O_ACCMODE) {
       case O_RDONLY:   /* O_RDONLY�� 0���� ���� */
          printf("%s is read only file\n", file);
          break;
       case O_WRONLY:   /* O_WRONLY�� 1�� ���� */
          printf("%s is write only file\n", file);
          break;
       case O_RDWR:   /* O_RDWR�� 2�� ���� */
          printf("%s is read-write file\n", file);
          break;
       default:
          printf("no such mode\n");
    }
    return 0;
}