#include <stdio.h>
#include <string.h>   /* strdup �Լ��� ���ǵ� ��� ���� */

main()
{
  /* ���ڿ� ������ ���� */ 
   char *ptrstr;

   /* strdup�� ���ڿ� ������ �������� ����� �� ������ ���ڿ� �迭 ����������
     ����� �� ����.
     �޸𸮸� �Ҵ��� 'Hello Linux'�� �����ϰ� �� ���ڿ��� ptrstr�� ����Ű�� �� */
   ptrstr = strdup("Hello Linux");
   printf("%s\n", ptrstr);
}