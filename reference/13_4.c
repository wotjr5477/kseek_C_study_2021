#include <stdio.h>
#include <search.h>   /* tsearch, twalk, tdelete �Լ��� ���ǵ� ��� ���� */
#include <string.h>   /* strcmp �Լ��� ���ǵ� ��� ���� */

int compare(const void *a, const void *b);
void printtree(void **node, VISIT order, int depth);

main()
{
   void *root;
   root = NULL;

   /* root�� ����Ű�� Ʈ������ �����͸� ã�µ� ������ Ʈ���� ���� */
   tsearch("Hello", &root, compare);
   tsearch("Linux", &root, compare);
   tsearch("C", &root, compare);
   /* root�� ����Ű�� Ʈ���� �湮�ϴµ� ��ü���� ������ printtree �Լ����� ���� */
   twalk(root, printtree);

   /* root�� ����Ű�� Ʈ������ "Hello"�� �������� �ϴ� ��带 ���� */
   tdelete("Hello", &root, compare);
   twalk(root, printtree);
}

/* a�� b�� ���� ������ 0�� ��ȯ */
int compare(const void *a, const void *b)
{
   return strcmp((char *)a, (char *)b);
}

/* postorder�̰ų� leaf�̸� ���. �ᱹ ���ĺ������� Ʈ���� ��� ������ ��� */
void printtree(void **node, VISIT order, int depth)
{
   char *str;
   str = *(char **)node;

   /* postorder�̰ų� leaf�̸� ����� �����͸� ��� */
   if(order==postorder || order==leaf)
      printf("string : %s\n", str);
}