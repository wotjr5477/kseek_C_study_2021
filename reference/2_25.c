#include <stdio.h>
int add(int n1, int n2);   /* �Լ� ���� */
main()
{
   int result;
   /* �Լ� ȣ��. 11�� 7�� ������ �Լ� ������ ������ ���� ���� ��ȯ�޴´�. */
   result = add(11, 7);   
   printf("11+7 = %d\n", result);
}
/* �Լ� ����. n1�� n2�� ���޹��� ���� ���� ������ �� �����ϰ�
   ������ ���� �� ��ȯ*/
int add(int n1, int n2)
{
   return n1+n2;
}