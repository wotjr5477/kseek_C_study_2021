#include <stdio.h>
#include <stdlib.h>   /* bsearch �Լ��� ���ǵ� ��� ���� */
#include <string.h>   /* strcmp �Լ��� ���ǵ� ��� ���� */

#define TABLESIZE 5   /* ���̺��� ũ�� */
#define ELEMENTSIZE 10   /* �������� ũ�� */

int compare(const void *a, const void *b);

main()
{
   /* table�� ���ĵǾ� �־�� �� */
   char table[TABLESIZE][ELEMENTSIZE]={"C", "Html", "Java", "Perl", "XML"};
   char *ptr;

   /* table���� "Java"�� ���� Ž���ϰ� ã�� �����Ϳ� ���� ������ ��ȯ
     ���� �߰����� ���ϸ� NULL�� ��ȯ */
   if((ptr=(char *)bsearch("Java", table, TABLESIZE, ELEMENTSIZE, compare))== NULL)
      printf("Not found\n");
   else
      printf("%s\n", ptr);

   /* table�� "Linux"�� ������ NULL ��ȯ */
   if((ptr=(char *)bsearch("Linux", table, TABLESIZE, ELEMENTSIZE, compare))== NULL)
      printf("Not found\n");
   else
      printf("%s\n", ptr);
}

int compare(const void *a, const void *b)
{
   return strcmp((char *)a, (char *)b);
}