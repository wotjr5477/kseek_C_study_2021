#include <stdio.h>
main()
{
   int ch;

   printf("Input character ==> ");
   /* Ű����� �ϳ��� ���ڸ� �Է� */
   ch = getchar();

   /* ch�� ����� ������ �����ڸ� �����Ѵ�. */
   if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
      printf("alphabet character\n");
   /* ch�� ����� ������ �����ڰ� �ƴϰ� ��ġ���ڸ� �����Ѵ�. */
   else if (ch>='0'&&ch<='9')
      printf("numeric character\n");
   /* ch�� ����� ������ �����ڵ� �ƴϰ� ��ġ���ڵ� �ƴϸ� �����Ѵ�. */
   else
      printf("others\n");
}