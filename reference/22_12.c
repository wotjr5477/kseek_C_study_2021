#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>

int find_file(char *dir, char *file);

main(int argc, char *argv[])
{
   if (find_file(argv[1], argv[2]))   /* argv[1] ���丮�� argv[2] ������ ������ */
      printf("found %s\n", argv[2]);
   else                         /* ������ */
      printf("not found %s\n", argv[2]);
   exit(0);
}

/* dir ���丮�� file ������ ������ 1�� ��ȯ�ϴ� �Լ� */
int find_file(char *dir, char *file)
{
   DIR *dp;   /* ���丮 ������ ���� ������ */
   struct dirent *dirp;   /* ���丮�� �� �׸��� ������ ���� ������ */

   if((dp=opendir(dir)) == NULL) {   /* dir ���丮 ���� */
      perror("opendir failed");
      exit(1);
   }
   /* dp ���丮�� �׸��� �ϳ��� �о� ���� */ 
   while (dirp=readdir(dp)) {  /* �׸� �̸�(d_name)�� file�� ������ 1�� ��ȯ */
      if (!strcmp(dirp->d_name, file)) {
         closedir(dp);
         return 1;
      }
   }
   closedir(dp);   /* dp ���丮 �ݱ� */
   return 0;   /* �߰����� ���ϸ� 0�� ��ȯ */
}