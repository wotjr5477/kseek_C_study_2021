#include <stdio.h>
#include <stdlib.h>   /* abs, labs �Լ��� ���ǵ� ��� ���� */
#include <math.h>   /* fabs �Լ��� ���ǵ� ��� ���� */

main()
{
   /* int �� �������� ���밪 ���ϱ� */
   printf("%d : %d\n", -345, abs(-345));
   /* long �� �������� ���밪 ���ϱ� */
   printf("%ld : %ld\n", -123456789, labs(-123456789));
   /* double �� �������� ���밪 ���ϱ� */
   printf("%g : %g\n", -23.456, fabs(-23.456));
}