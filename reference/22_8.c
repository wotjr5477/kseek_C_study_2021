#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>   /* strlen �Լ��� ���ǵ� ��� ���� */

main(int argc, char *argv[])
{
   int fd;

   if(mkdir(argv[1], 0755) == -1) {   /* argv[1] ���丮�� ���� */
      perror("mkdir failed");
      exit(1);
   }

   if(chdir(argv[1]) == -1) {   /* argv[1] ���丮�� �̵� */
      perror("chdir failed");
      exit(1);
   }

   /* argv[2] ������ ���� �������� ���µ� ���� ������ ������ ���� */
   if((fd=open(argv[2], O_WRONLY | O_CREAT, 0644)) == -1) {
      perror("open failed");
      exit(1);
   }

   write(fd, argv[3], strlen(argv[3]));   /* fd ���Ͽ� argv[3] ���ڿ� ���� */

   close(fd);
   exit(0);
}