#include <stdio.h>
#include <string.h>   /* strcpy�� �����ϰ� �ִ� ��� ���� */
main()
{
   char str[4];
   /* ���ڿ� ����� �迭 ������ �����ϱ� ���� strcpy�� �̿� */
   strcpy(str, "abc");
   printf("%s\n", str);
}