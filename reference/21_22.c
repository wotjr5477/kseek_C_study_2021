#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

main()
{
   int fd;

   /* 1�� ���� �ĺ��ڿ� ���ο� ���� �ĺ��ڸ� �ο��޾� fd�� �����Ѵ�.
      1���� ǥ�� ����� �ǹ��ϹǷ� fd�� ǥ�� ����� ��Ÿ����. */
   if ((fd=dup(1)) == -1) {
      perror("dup failed");
      exit(1);
   }
   /* fd�� ���Ͽ� ��ABCD���� ���� �������� ǥ�� ��� ��ġ�� ����ͷ� ��� */
   write(fd, "ABCD", 5);
   exit(0);
}