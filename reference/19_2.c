#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

main()
{
   int fd;
   /* nodata ������ �б� �������� ����. */
   if ((fd=open("nodata", O_RDONLY)) == -1){ /* open �Լ� ȣ�⿡ �����ϸ� -1 ��ȯ */
      printf("errno = %d\n", errno);   /* ���� �߻��ϸ� errno�� ���� ��ȣ ���� */
      exit(1);
   }
   exit(0);
}