#include <stdio.h>

main()
{
   int ch, numalpha=0;

   /* �Է��� ����� ������ �ݺ� */
   while((ch=getchar()) != EOF) {
      /* ch�� �������̸� */
      if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
         numalpha++;
   }
   printf("alphabet : %d\n", numalpha);
}