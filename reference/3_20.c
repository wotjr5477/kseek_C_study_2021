#include <stdio.h>
main()
{
   int ch='Z';
  /* 07������ ���� �����ϰ� ���ǽ��� �˻��Ѵ�. */
  do {
      printf("%c", ch--);
   } while (ch >= 'A');   /* ch�� 'A'���� ũ�ų� ������ �ݺ� ���� */
   printf("\n");
}