#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>

main()
{
   DIR *dp;   /* ���丮 ������ ���� ������ */

   if(mkdir("dir", 0755) == -1) {   /* dir ���丮�� ���� */
      perror("mkdir failed");
      exit(1);
   }
   /* dir ���丮�� ���µ� ���丮 ������ ���� �����Ͱ� ��ȯ */
   if((dp=opendir("dir")) == NULL) {
      perror("opendir failed");
      exit(1);
   }
   closedir(dp);   /* dp ���丮 �ݱ� */
   exit(0);
}