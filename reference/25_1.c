#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

main(int argc, char *argv[])
{
    int fd;
    struct flock filelock;

    /* argv[1]�� ������ ��r���̸� F_RDLCK��, �ƴϸ� F_WRLCK�� filelock.l_type�� ���� */
    filelock.l_type = (!strcmp(argv[1],"r"))?F_RDLCK:F_WRLCK;
    /* ���� ��ü�� �������� */
    filelock.l_whence = SEEK_SET;
    filelock.l_start = 0;
    filelock.l_len = 0;

    /* argv[2] ������ ���µ� ������ ���� */
    fd = open(argv[2], O_RDWR | O_CREAT, 0666);

    /* fd ���� ��, argv[2]�� ���� filelock ���·� ���ڵ� ����� ���� */
    if(fcntl(fd, F_SETLK, &filelock) == -1) {
       perror("fcntl failed");
       exit(1);
    }
    printf("locked %s\n", argv[2]);
    sleep(30);
    printf("unlocked %s\n", argv[2]);
    exit(0);
}