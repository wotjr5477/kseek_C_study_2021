#include <stdio.h>
main() 
{
   char *str;

   str = "Hello";   /* char�� ������ ������ ���ڿ� ���� */
   for(; *str; str++)
      printf("%s\n", str);
}
