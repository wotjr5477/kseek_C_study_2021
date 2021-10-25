#include <stdio.h>
#include <search.h>   /* lsearch �Լ��� ���ǵ� ��� ���� */
#include <string.h>   /* strcmp �Լ��� ���ǵ� ��� ���� */

#define TABLESIZE 10   /* ���̺��� ũ�� */
#define ELEMENTSIZE 15   /* �������� ũ�� */

int compare(const void *a, const void *b);

main()
{
   char table[TABLESIZE][ELEMENTSIZE]={"Hello", "Linux", "C"};
   char *ptr;
   int datanum=3;   /* ������ ���� */

   /* table���� "Linux"�� Ž���ϰ� ã�� �����Ϳ� ���� ������ ��ȯ */
   ptr = (char *)lsearch("Linux", table, &datanum, ELEMENTSIZE, compare);
   printf("%s\n", ptr);

   /* table���� "Programming"�� ã�µ� ������ ���̺� �ڿ� �߰��ϰ� �̿� ���� 
     �����͸� ��ȯ. ���̺� �����Ͱ� �ϳ� �߰��ǹǷ� datanum�� 1 ���� */
   ptr = (char *)lsearch("Programming", table, &datanum, ELEMENTSIZE, compare);
   printf("%s\n", ptr);
}

/* a�� b�� ���� ������ 0�� ��ȯ */
int compare(const void *a, const void *b)
{
   return strcmp((char *)a, (char *)b);
}