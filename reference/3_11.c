#include <stdio.h>
main()
{
   char ch = 'a';
   int i = 256;
   /* char���� int���� �⺻������ ������ �� �� �����Ƿ� ũ�Ⱑ �� ���� ���������� 
      char���� int������ �ڵ� ��ȯ�Ͽ� �����Ѵ�. */
   printf("%d\n", ch + i);
}