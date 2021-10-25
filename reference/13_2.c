#include <stdio.h>
#include <search.h>   /* lfind �Լ��� ���ǵ� ��� ���� */
#include <string.h>   /* strcmp �Լ��� ���ǵ� ��� ���� */

#define TABLESIZE 10   /* ���̺��� ũ�� */
#define ELEMENTSIZE 15   /* �������� ũ�� */

int compare(const void *a, const void *b);

main()
{
   char table[TABLESIZE][ELEMENTSIZE]={"Hello", "Linux", "C"};
   char *ptr;
   int datanum=3;

   /* table���� "Linux"�� Ž���ϰ� ã�� �����Ϳ� ���� ������ ��ȯ */
   if((ptr=(char *)lfind("Linux", table, &datanum, ELEMENTSIZE, compare))== NULL)
      printf("Not found\n");
   else
      printf("%s\n", ptr);

   /* table�� "Programming"�� ������ NULL ��ȯ */
   if((ptr=(char *)lfind("Programming", table, &datanum, ELEMENTSIZE, compare))== NULL)
      printf("Not found\n");
   else
      printf("%s\n", ptr);
}

int compare(const void *a, const void *b)
{
   return strcmp((char *)a, (char *)b);
}