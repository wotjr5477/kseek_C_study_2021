#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

main()
{
   /* dir ���丮�� 0755 �������� ���� */
   if(mkdir("dir", 0755) == -1) {
      perror("mkdir failed");
      exit(1);
   }
   /* dir ���丮�� ���� */
   if(rmdir("dir") == -1) {
      perror("rmdir failed");
      exit(2);
   }
   exit(0);
}