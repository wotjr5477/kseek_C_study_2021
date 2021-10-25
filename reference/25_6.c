#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

main(int argc, char *argv[])
{
    int fd;
    struct flock filelock;

    /* ���� ��� */
    filelock.l_type = F_WRLCK;
    /* ���� ��ü */
    filelock.l_whence = SEEK_SET;
    filelock.l_start = 0;
    filelock.l_len = 0;

    fd = open(argv[1], O_RDWR);

    /* fd ������ �ٸ� ���μ����� ���� ����־ ���ڵ� ��ݿ� �����ϸ� */
    if(fcntl(fd, F_SETLK, &filelock) == -1) {
       /* ���ڵ� ��� ������ filelock�� ��� �� */
       fcntl(fd, F_GETLK, &filelock);
       /* filelock.l_pid�� ����� �����ϰ� �ִ� ���μ����� ���μ��� ID */
       fprintf(stderr, "%s locked by %d\n", argv[1], filelock.l_pid);
       exit(1);
    }
    exit(0);
}