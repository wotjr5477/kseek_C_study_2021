#include <stdio.h>
#include <string.h>   /* strrchr �Լ��� ���ǵ� ��� ���� */

main()
{
   char *str="ABCABCABCABCABC";
   char *ptr;

   /* ���ڿ� str���� ���� 'A'�� ���������� �߰ߵǴ� ��ġ�� �˻��ϰ� �����͸� ��ȯ */
   ptr = strrchr(str, 'A');
   printf("%s\n", ptr);
}