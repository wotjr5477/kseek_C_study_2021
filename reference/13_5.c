#include <stdio.h>
#include <search.h>   /* hcreate, hsearch �Լ��� ���ǵ� ��� ���� */

main()
{
   ENTRY item;
   ENTRY *result;

   /* �ؽ� ���̺� ����. 5�� ���̺� ������ �������� ������ ���� ������ */
   hcreate(5);

   /* 3���� �����͸� �ؽ� ���̺� ���� */
   item.key = "Linux";
   item.data = "Linux";
   /* item�� �ؽ� ���̺��� Ž���ϴµ�, �߰����� ���ϸ� item�� �����ϰ�
     �̿� ���� �����͸� ��ȯ */
   hsearch(item, ENTER);
   item.key = "C";
   item.data = "C";
   hsearch(item, ENTER);
   item.key = "Programming";
   item.data = "Programming";
   hsearch(item, ENTER);

   item.key = "Linux";
   /* �ؽ� ���̺��� �����͸� Ž���Ͽ� item�� �߰��ϸ� �����͸� ����ϰ� 
     �߰����� ���ϸ� ���� �޽��� ��� */
   if((result=hsearch(item, FIND)) == NULL)
      printf("Not found\n");
   else
      printf("Found : %s\n", item.data);

   item.key = "Java";
   if((result=hsearch(item, FIND)) == NULL)
      printf("Not found\n");
   else
      printf("Found : %s\n", result->data);
}