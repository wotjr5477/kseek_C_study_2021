#include <stdio.h>
main()
{
   int ch='Z';

   /* ���� (ch >= 'A')�� ���̸� �ݺ� �����ϰ� ������ �Ǹ� while ���� �����. */
   while (ch >= 'A')
      printf("%c", ch--);
   printf("\n");
}