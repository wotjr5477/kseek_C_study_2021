#include <fcntl.h>

main()
{
   int fd;
 
   /* jkim ������ �б� �������� ����. 
     ���� ȣ�⿡ �����ϰ� �Ǹ� -1�� ��ȯ�ǹǷ� if ������ ���� �� */
   if ((fd = open("jkim", O_RDONLY)) == -1) {
      perror("open failed");
      exit(1);
   }
   /* fd ���� �ݱ� */
   close(fd);
   exit(0);
}