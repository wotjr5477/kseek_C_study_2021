#include <stdio.h>
#include <time.h>   /* time �Լ��� ���ǵ� ��� ���� */

main()
{
   time_t time_now;   /* time_t ���� long int ���� */

   /* 1970�� 1�� 1�� 00:00:00 UTC ������ �ð��� �� ������ ���� time_now�� ���� */
   time(&time_now);
   printf("%ld\n", time_now);
}