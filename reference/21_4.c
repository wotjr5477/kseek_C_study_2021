#include <fcntl.h>

main()
{
   int fd;

   /* ���� ���丮�� jkim ������ ������ �б� �������� ����, 
      ������ ���� ���丮�� 0����Ʈ ũ���� jkim�� �����ϰ� �̸� ����. 
      ������ ������ ���� ���� ������ 0644 */
   if ((fd = open("jkim", O_RDONLY | O_CREAT, 0644)) == -1) {
      perror("open failed");
      exit(1);
   }
   close(fd);
   exit(0);
}
