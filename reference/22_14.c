#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

main(int argc, char *argv[])
{
   DIR *dp;
   struct dirent *dirp;
   char *dir;

   /* ��� ������ �μ��� 1����� ���� �۾� ���丮�� ���� ���� */
   if (argc == 1)
      dir = ".";
   /* �׷��� ������ argv[1] ���丮�� ���� ���� */
   else
      dir = argv[1];
   if((dp=opendir(dir)) == NULL) {   /* dir ���丮 ���� */
      perror("opendir failed");
      exit(1);
   }
   /* dp  ���丮�� ��� �׸�鿡 ���� �̸��� ���. 
     ��, ��.������ ���۵Ǵ� �׸� ���� �̸��� ������� ���� */
   while (dirp=readdir(dp)) {
      if (strncmp(dirp->d_name, ".", 1))
         printf("%s ", dirp->d_name);
   }
   printf("\n");
   closedir(dp);   /* dp ���丮 �ݱ� */
   exit(0);
}