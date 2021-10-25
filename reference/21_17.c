#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

main(int argc, char *argv[])
{
    int fd;
    if ((fd = creat(argv[1], 0644)) == -1) {
       perror("creat failed");
       exit(1);
    }
    write(fd, "abcdefghijklmnopqrstuvwxyz", 26);
    /* ������ ������ �� ���� ��ġ�� �����ϴ� �͵� �����ϸ�
      �� ������ NULL�� ä���� */
    if (lseek(fd, 30, SEEK_SET) == -1) {
       perror("lseek failed");
       exit(1);
    }
    write(fd, "ABCD", 4);
    close(fd);
    exit(0);
}