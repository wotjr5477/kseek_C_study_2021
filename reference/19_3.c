#include <stdio.h>
#include <math.h>   /* sqrt �Լ��� �����ϴ� ��� ���� */
#include <errno.h>   /* errno ������ �����ϴ� ��� ���� */

main()
{
   double y;

   errno = 0;  /* errno�� 0���� �ʱ�ȭ */
   y = sqrt(-1);  /* sqrt �Լ��� �μ��� ���� ���� �� �� �����Ƿ� ȣ�� ���� �߻� */

   /* errno�� 0�� �ƴ϶�� ���� ������ �߻������� �ǹ� */
   if (errno != 0) { 
      printf("errno = %d\n", errno);  /* errno�� ����� ���� ��ȣ ��� */
      exit(1);
   }
   exit(0);
}