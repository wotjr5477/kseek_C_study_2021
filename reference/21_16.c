#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#define MAX 10

main()
{
    int fd, count;
    char buf[MAX];

    if ((fd = open("alphabet", O_RDONLY)) == -1) {
       perror("open failed");
       exit(1);
    }
    /* fd ������ �б�/���� �����͸� ù ��ġ�κ��� �ڷ� 5ĭ �̵� */
    lseek(fd, 5, SEEK_SET);
    count = read(fd, buf, MAX);
    /* ǥ�� ��� ��ġ�� buf�� �ִ� count ����Ʈ�� �����͸� ��� */
    write(STDOUT_FILENO, buf, count);
    close(fd);
    exit(0);
}