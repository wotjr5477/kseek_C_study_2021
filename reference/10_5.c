#include <stdio.h>
#include <stdlib.h>   /* malloc �Լ��� ���ǵ� ��� ���� */
#include <string.h>   /* memset �Լ��� ���ǵ� ��� ���� */

main()
{
   int *ptr;

   /* 10 ����Ʈ ũ���� �޸� �Ҵ��ϰ� ptr�� ����Ŵ */
   if((ptr=(int *)malloc(10)) == NULL)
      exit(1);

   /* ptr�� ����Ű�� �޸� ������ 9 ����Ʈ�� 'a'�� �ʱ�ȭ */
   memset(ptr, 'a', 9);
   ptr[9] = '\0';

   printf("%s\n", ptr);

   /* �޸� ���� ���� */
   free(ptr);
}