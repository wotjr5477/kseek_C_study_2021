#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

main()
{
   int fd1, fd2;

   /* jkim ������ �б� �������� ����. ��ȯ�Ǵ� ���� ���� ���� ���� �ĺ��ڶ� �� */ 
   fd1 = open("jkim", O_RDONLY);
   /* kang ������ ���� �������� ���� */
   fd2 = open("kang", O_WRONLY);
   /* �������� ���� �ĺ��ڸ� ��� */
   printf("jkim's file descriptor: %d\nkang's file descriptor: %d\n", fd1, fd2);
   /* ���� �ĺ��ڸ� �̿��ؼ� ���� ���� */
   close(fd1);
   close(fd2);
}