#include <stdio.h>
#include <string.h>   /* strchr �Լ��� ���ǵ� ��� ���� */

main()
{
   char *str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char *ptr;

   /* ���ڿ� str���� ���� 'K'�� ù ��°�� ������ ��ġ�� �˻��ϰ� �����͸� ��ȯ */
   ptr = strchr(str, 'K');
   printf("%s\n", ptr);
}