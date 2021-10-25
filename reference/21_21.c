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
    /* fd ������ 150 ����Ʈ ũ��� �����. ������ ũ�Ⱑ 150����Ʈ���� 
     �۾Ƶ� 150����Ʈ ũ�Ⱑ �Ǵµ� �� ������ NULL�� ä������. */
    if (ftruncate(fd, 150) == -1) {
       perror("ftruncate failed");
       exit(1);
    }
    close(fd);
    exit(0);
}