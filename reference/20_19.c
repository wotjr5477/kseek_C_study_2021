#include <stdio.h>
#include <grp.h>
#include <sys/types.h>

main()
{
   struct group *pg;
   int i;

   /* �׷� ���Ϸκ��� �׷� ������ ���ʷ� �о� ��� */
   while (pg = getgrent()) {
      printf("group name: %s\n   member: ", pg->gr_name);
      /* �׷쿡 ���� ����� ���� ���θ� ��� */
      for (i=0; pg->gr_mem[i]!=NULL; i++)
         printf("%s ", pg->gr_mem[i]);
      printf("\n\n");
   }
   /* ����� ���� �׷� ������ ���� */
   endgrent();
   exit(0);
}