#include <stdio.h>
#include <stdlib.h>   /* malloc �Լ��� ���ǵ� ��� ���� */

main()
{
   char *ptr;
   int i;

   /* 10 ����Ʈ ũ���� �޸� �Ҵ��ϰ� ptr�� ����Ŵ */
   if((ptr=(char *)malloc(10)) == NULL)
      exit(1);

   /* 'a'�� �ʱ�ȭ */
   for(i=0; i<9; i++)
      ptr[i] = 'a';
   /* ���ڿ��� �������� �ǹ� */
   ptr[i] = '\0';

   printf("%s\n", ptr);

    /* �޸� ���� ���� */
   free(ptr);
}