#include <fcntl.h>

main()
 
   int fd;

   /* ���� ���丮�� jkim ������ ������ open �Լ� ȣ�⿡ �����Ͽ� -1�� ��ȯ�ϰ�
      ���� ���ٸ� ���� ���丮�� jkim�� �����ϰ� �б� �������� ����. */
   if ((fd = open("jkim", O_RDONLY | O_CREAT | O_EXCL, 0644)) == -1) {
      perror("open failed");
      exit(1);
   }
   close(fd);
   exit(0);
}