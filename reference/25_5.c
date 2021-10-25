#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define SIZE 20

main(int argc, char *argv[])
{
    int fd;
    struct flock filelock;
    char buffer[SIZE];
    int length;

    filelock.l_type = F_RDLCK;   /* �б� ��� */
    /* ���� ��ü�� �������� */
    filelock.l_whence = SEEK_SET;
    filelock.l_start = 0;
    filelock.l_len = 0;
 
    fd = open(argv[1], O_RDWR);   /* agrv[1] ���� ���� */

    /* fd ���Ͽ� ���� �б� ����� ����.
      �̹� ���ڵ� ����� �����Ǿ� ������ ������ ������ ��ٸ� */
    if(fcntl(fd, F_SETLKW, &filelock) == -1) {
       perror("fcntl failed");
       exit(1);
   }
    printf("locked %s\n", argv[1]);
    /* ���Ͽ��� ������ �б� */
    length = read(fd, buffer, SIZE);
    /* ���� �����͸� ǥ�� ��� ��ġ�� ��� */
    write(STDOUT_FILENO, buffer, length);
    printf("unlocked %s\n", argv[1]);
    exit(0);
}