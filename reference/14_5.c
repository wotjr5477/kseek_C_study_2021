#include <stdio.h>
#include <time.h>   /* time, difftime �Լ��� ���ǵ� ��� ���� */
#include <unistd.h>   /* sleep �Լ��� ���ǵ� ��� ���� */

main()
{
   time_t old, new;

   /* �� ������ ���� �ð� ��� */
   time(&old);
   /* 5�� ���� �����ϱ� */
   sleep(5);
   time(&new);

   /* new �ð��� old �ð��� �� ���� �ð����� ���� */
   printf("%g\n", difftime(new, old));
}