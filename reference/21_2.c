#include <fcntl.h>
#include <unistd.h>
#define BUFFSIZE 1024

main()
{
   int fd1, fd2;
   ssize_t n;
   char buf[BUFFSIZE];

   /* jkim ������ �б� �������� ����. fd1�� jkim�� �ǹ� */
   fd1 = open("jkim", O_RDONLY);
   /* kang ������ ���� �������� ����. fd2�� kang�� �ǹ� */
   fd2 = open("kang", O_WRONLY);
   /* fd1 ���Ͽ��� ���ڸ� BUFFSIZE ũ�⸸ŭ �о� buf�� ����. 
      read �Լ������� ���� �ĺ��ڸ� ����ϰ� ��ȯ���� ������ ���� ����Ʈ �� */
   n = read(fd1, buf, BUFFSIZE);
   /* buf�� �ִ� ������ n����Ʈ��ŭ fd2 ���Ͽ� ����. 
      write �Լ������� ���� �ĺ��ڸ� ��� */
   write(fd2, buf, n);
   /* fd1 ���� �ݱ� */
   close(fd1);
   close(fd2);
}