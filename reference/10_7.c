#include <stdio.h>
#include <string.h>   /* memmove �Լ��� ���ǵ� ��� ���� */

main()
{
   char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

   /* alphabet 7��° �������� 19 ����Ʈ ũ���� ������ alphabet ù �κп� 
     �����Ͽ� ���� ���Ⱑ �ǰ�, ���� �� ��° �μ��� 19�� �ƴ� 20�� �����ϸ� 
     NULL('\0') ���ڱ��� ����Ǿ� ������ ���� NULL ���ڱ����� ��µ� */
   memmove(alphabet, alphabet+7, 19);
   printf("%s\n", alphabet);
}