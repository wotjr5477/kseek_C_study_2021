#include <stdio.h>
#include <string.h>   /* strstr �Լ��� ���ǵ� ��� ���� */

main()
{
   char *str="Hello Linux Programming, Linuxer";
   char *ptr;

   /* ���ڿ� str���� ���ڿ� "Linux"�� ó������ �߰ߵǴ� ��ġ�� �˻��ϰ� �����͸� ��ȯ */
   ptr = strstr(str, "Linux");
   printf("%s\n", ptr);
}