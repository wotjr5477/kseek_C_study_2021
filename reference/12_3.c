#include <stdio.h>
#include <math.h>   /* ceil, floor, modf �Լ��� ���ǵ� ��� ���� */

main()
{
   double fra, itr;

   /* double �� �������� �Ҽ��� ���ϸ� �ø� */
   printf("%g\n", ceil(123.45));
   /* double �� �������� �Ҽ��� ���ϸ� ���� */
   printf("%g\n", floor(345.67));

   /* double �� �����͸� �����ο� �Ҽ��η� �����Ͽ� �����δ� itr�� �����ϰ�
      �Ҽ��δ� ��ȯ�Ǿ� fra�� ���� */
   fra = modf(123.45, &itr);
   printf("%g, %g\n", itr, fra);
}