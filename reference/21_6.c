#include <fcntl.h>

main()
{
   int fd;
 
   /* jkim ������ ������ ������ ���� �������� ���� 0 ����Ʈ�� �ڸ���,
     ���� ���ٸ� 0����Ʈ ũ���� jkim�� �����ϰ� ���� �������� ����. */
   if ((fd = open("jkim", O_WRONLY | O_CREAT | O_TRUNC, 0644)) == -1) {
      perror("open failed");
      exit(1);
   }
   close(fd);
   exit(0);
}