#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

main(int argc, char *argv[])
{
    int fd;
    off_t filesize;

    if ((fd = open(argv[1], O_RDONLY)) == -1) {
       perror("open failed");
       exit(1);
    }
   /* �б�/���� �����Ͱ� ������ ���� ����Ű�� �ǰ�, 
       ����� �б�/���� �����Ͱ� ��ȯ�Ǵµ� �̴� ������ ũ�Ⱑ �ȴ�. */
    if ((filesize=lseek(fd, 0, SEEK_END)) == -1) {
       perror("lseek failed");
       exit(1);
    }
    printf("%s\'s size is %d\n", argv[1], filesize);
    close(fd);
    exit(0);
}