#include <fcntl.h>
#include <unistd.h>

main()
{
   int fd;
   char buf[20]="Linux C Programming";
  
   /* newfile�� ������ ���� �������� ����, ������ newfile�� �����Ͽ� �� */
   if ((fd=open("newfile", O_WRONLY | O_CREAT, 0644)) == -1) {
      perror("open failed");
      exit(1);
   }
   /* fd ���Ͽ� buf�� �ִ� 20����Ʈ ������ ���� */
   if (write(fd, buf, 20) == -1) {
      perror("write failed");
      exit(1);
   }
   close(fd);
   exit(0);
}