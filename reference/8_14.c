#include <stdio.h>
#include <string.h>   /* strpbrk �Լ��� ���ǵ� ��� ���� */

main()
{
   char *ptr;

   /* "seoulKorea"���� "Ka"�� ���ڵ� �� ��ġ�ϴ� ù ��° ���ڴ� 'K'�ε� 
      �� ���ڿ� ���� �����͸� ��ȯ */
   ptr = strpbrk("seoulKorea", "Ka");
   printf("%s\n", ptr);
}