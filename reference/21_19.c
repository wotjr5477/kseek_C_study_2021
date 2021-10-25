#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

main(int argc, char *argv[])
{
    int fd;

    if ((fd = open(argv[1], O_WRONLY)) == -1) {
       perror("open failed");
       exit(1);
    }
    /* �б�/���� �����Ͱ� ������ ������ �̵� */
    if (lseek(fd, 0, SEEK_END) == -1) {
       perror("lseek failed");
       exit(1);
    }
    /* ���⸦ �ϸ� ������ �ڿ� ���� */
    write(fd, " ABCD", 5);
    close(fd);
    exit(0);
}