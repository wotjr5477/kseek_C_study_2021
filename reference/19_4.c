#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

main()
{
   int fd;

   /* open �Լ� ȣ�⿡ �����ϸ� -1�� ��ȯ */
   if ((fd=open("nodata", O_RDONLY)) == -1) {
      /* ENOENT�� ���׿� ���� ���� �Ǵ� ���丮�� ���١��� �ǹ��� ��ũ�� */
      if (errno == ENOENT) 
         printf("nodata is not exist\n");
      else
         printf("unexpected error: errno = %d\n", errno);
      exit(1);
   }
   exit(0);
}