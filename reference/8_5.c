#include <stdio.h>
#include <string.h>   /* strcpy, strncpy �Լ��� ���ǵ� ��� ���� */

main()
{
   char buf1[20] = "Linux";
   char buf2[20] = "Linux";

   strcat(buf1, " Programmnig");   /* " Programmnig"�� buf1�� ���� */
   strncat(buf2, " Programmnig", 5);   /* " Programmnig" �� 5���� ���ڸ� buf1�� ���� */

   printf("%s\n%s\n", buf1, buf2);
}