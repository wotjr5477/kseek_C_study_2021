#include <stdio.h>

main()
{
   /* �ڽ��� ����ü�� ����Ű�� �����͸� ����� �ϴ� �ڱ� ���� ����ü ���� */
   struct list {
      int data;
      struct list *next;
   };

   struct list first, second, third;   /* ����ü ���� ���� */

   first.data = 1;
   second.data = 2;
   third.data = 3;
   /* first�� next ����� second��, second�� next ����� third�� ����Ű�� �ȴ�. */
   first.next = &second;
   second.next = &third;

   printf("%d %d %d\n", first.data, first.next->data, first.next->next->data);
}