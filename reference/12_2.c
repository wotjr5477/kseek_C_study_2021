#include <stdio.h>
#include <stdlib.h>   /* div, ldiv �Լ��� ���ǵ� ��� ���� */
#include <math.h>   /* fmod �Լ��� ���ǵ� ��� ���� */

main()
{
   div_t result1;
   ldiv_t result2;

   /* int �� �������� ��� �������� ���� ��ȯ�� ���� result1�� ����Ǵµ�
      result1.quot�� ���� ����ǰ� result1.rem�� �������� ���� */
   result1 = div(12345, 2345);
   /* long �� �������� ��� ������ ���ϱ� */
   result2 = ldiv(123456789, 12345678);

   /* result1.quot�� ��, result1.rem�� �������� �ǹ� */
   printf("%d, %d\n", result1.quot, result1.rem);
   printf("%ld, %ld\n", result2.quot, result2.rem);
   /* double �� �������� ������ ���ϱ� */
   printf("%g\n", fmod(23.456, 2.345));
}