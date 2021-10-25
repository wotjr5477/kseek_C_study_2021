#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

main(int argc, char *argv[])
{
    int fd;
    struct flock filelock;

    filelock.l_type = F_WRLCK;   /* ���� ��� */
    /* ���� ��ü�� �������� */
    filelock.l_whence = SEEK_SET;
    filelock.l_start = 0;
    filelock.l_len = 0;

    /* argv[1] ������ ���µ� ������ ���� */
    fd = open(argv[1], O_RDWR | O_CREAT, 0666);

    /* fd ���Ͽ� ���� ���� ����� ���� */
    if(fcntl(fd, F_SETLK, &filelock) == -1) {
       perror("fcntl failed");
       exit(1);
    }
    printf("locked %s\n", argv[1]);
    /* ���Ͽ� ������ ���� */
    write(fd, "Hi Linux", 9);
    sleep(5);
    printf("unlocked %s\n", argv[1]);
    /* �����ϸ� ���ڵ� ����� �ڵ������� ���� */
    exit(0);
}