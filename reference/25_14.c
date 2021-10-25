#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define SIZE 128   /* buffer ũ�⸦ ��Ÿ���� ��ũ�� */
#define FIFO "fifo"   /* fifo�� ��Ÿ���� ��ũ�� */

main(int argc, char *argv[])
{
    int fd;
    char buffer[SIZE];

    /* ���� ������ 0666�� fifo��� �̸��� FIFO ���� */
    if(mkfifo(FIFO, 0666) == -1) {
       perror("mkfifo failed");
       exit(1);
    }
    /* FIFO�� ����ϱ� ���ؼ��� ����� �� */
    if((fd=open(FIFO, O_RDWR)) == -1) {
       perror("open failed");
       exit(1);
    }

    /* ���� �ݺ� */
    while(1) {
       /* fifo�κ��� �б� */
       if(read(fd, buffer, SIZE) == -1) {
          perror("read failed");
          exit(1);
       }
       /* ���� �����Ͱ� quit�̸� ���� */
       if(!strcmp(buffer, "quit"))
          exit(0);
       /* ���� �����͸� ��� */
       printf("receive message: %s\n", buffer);
    }
}