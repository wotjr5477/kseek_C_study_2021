#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

main()
{
   DIR *dp;   /* ���丮 ������ ���� ������ */
   struct dirent *dirp;   /* ���丮�� �� �׸��� ������ ���� ������ */

   if((dp=opendir(".")) == NULL) {   /* ����(.) ���丮 ���� */
      perror("opendir failed");
      exit(1);
   }
   /* dp ���丮�� �׸���� �ϳ��� �о �׸� �̸��� ����Ѵ�. 
     �� �̻� ���� �׸��� ������ NULL�� ��ȯ�ȴ�. */
   while (dirp=readdir(dp)) {
      printf("%s ", dirp->d_name);
   }
   printf("\n");
   closedir(dp);   /* dp ���丮 �ݱ� */
   exit(0);
}