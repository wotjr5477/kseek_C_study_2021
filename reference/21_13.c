#include <fcntl.h>
#include <unistd.h>
#define MAX 1024

main(int argc, char *argv[])
{
   int fd1, fd2;
   int count;
   char buf[MAX];
   /* ��� ������ �μ��� 3���� �ƴϸ� ���� �޽����� ����ϰ� �����Ѵ�. */
   if (argc != 3) {
      perror("argc is not 3");
      exit(1);
   }
   /* argv[1] ������ �б� �������� ����. ���� �������� file1�� �ȴ�. */
   if ((fd1=open(argv[1], O_RDONLY)) == -1) {/
      perror("open failed");
      exit(1);
   }   
   if ((fd2=open(argv[2], O_WRONLY | O_CREAT, 0644)) == -1) {
      perror("open failed");
      exit(1);
   }
   /* fd1 ���Ϸκ��� MAX����Ʈ��ŭ�� �����͸� �о buf�� ���� */
   while ((count=read(fd1, buf, MAX)) > 0) {
      /* fd2 ���Ͽ� buf�� �ִ� count����Ʈ��ŭ�� ������ ���� */
      if (write(fd2, buf, count) != count) {
         perror("write failed");
         exit(1);
      }
   }
   close(fd1);
   close(fd2);
   exit(0);
}