#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>

main()
{
   DIR *dp;
   struct dirent *dirp;

   if((dp=opendir(".")) == NULL) {   /* ���� ���丮 ���� */
      perror("opendir failed");
      exit(1);
   }
   /* ���丮�� �׸���� �о �̸��� ��� */
   while (dirp=readdir(dp)) {
      printf("%s ", dirp->d_name);
   }
   printf("\n");

   rewinddir(dp);   /* ���丮 �����͸� ù ��° �׸����� �ǵ��� */
   while (dirp=readdir(dp)) {
      printf("%s ", dirp->d_name);
   }
   printf("\n");

   closedir(dp);   /* dp ���丮 �ݱ� */
   exit(0);
}