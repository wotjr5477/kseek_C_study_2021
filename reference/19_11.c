#include <stdio.h>

main()
{
   FILE *fp;

   if ((fp=fopen("nodata", "r")) == NULL) { /* fopen �Լ� ȣ�� ���� �߻��ϸ� */
      perror("ERROR");
      exit(1);
   }
   exit(0);
}