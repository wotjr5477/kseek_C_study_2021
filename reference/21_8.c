#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define MAX 10

main()
{
   int fd;
   char buf1[MAX], buf2[MAX];

   /* alphabet ������ �б� �������� ���� */
   if ((fd = open("alphabet", O_RDONLY)) == -1) {
      perror("open failed");
      exit(1);
   }
   /* fd ���Ϸκ��� ó�� MAX����Ʈ ũ�⸸ŭ�� ���ڸ� �о� buf1�� ���� */
   read(fd, buf1, MAX);
   /* fd ���Ϸκ��� 17���ο��� ���� �������κ��� MAX����Ʈ ũ�⸸ŭ�� 
     ���ڸ� �о� buf2�� ���� */
   read(fd, buf2, MAX);
   printf("buf1[0]: %c\nbuf2[0]: %c\n", buf1[0], buf2[0]);
   close(fd);
   exit(0);
}