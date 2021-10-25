#include <fcntl.h>
#include <unistd.h>
#define MAX 1024

main()
{
   int count;
   char buf[MAX];

   /* STDIN_FILENO�� ǥ�� �Է��� �ǹ�. ǥ�� �Է��� Ű���带 ���� �̷�� �� */
   while ((count=read(STDIN_FILENO, buf, MAX)) > 0) {
      /* STDOUT_FILENO�� ǥ�� ����� �ǹ�. ǥ�� ����� ����͸� ���� �̷�� �� */
      if (write(STDOUT_FILENO, buf, count) != count) {
         perror("write failed");
         exit(1);
      }
   }
   exit(0);
}