#include <stdio.h>
#include <stdlib.h>   /* qsort �Լ��� ���ǵ� ��� ���� */
#include <string.h>   /* strcmp �Լ��� ���ǵ� ��� ���� */

#define TABLESIZE 5   /* ���̺��� ũ�� */
#define ELEMENTSIZE 15   /* �������� ũ�� */

int compare(const void *a, const void *b);

main()
{
   int i;
   char table[TABLESIZE][ELEMENTSIZE]={"Hello", "Linux", "C", "Programming", "Java"};

   /* table�� �� ���� */
   qsort(table, TABLESIZE, ELEMENTSIZE, compare);

   /* ���ĵ� ���̺� ��� */
   for(i=0; i<TABLESIZE; i++)
      printf("%s\n", table[i]);
}

/* a�� b�� ���� a�� ������ ������, ������ 0��, ũ�� ����� ��ȯ */
int compare(const void *a, const void *b)
{
   return strcmp((char *)a, (char *)b);
}