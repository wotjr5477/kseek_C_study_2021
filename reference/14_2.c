#include <stdio.h>
#include <time.h>   /* time, ctime �Լ��� ���ǵ� ��� ���� */

main()
{
   time_t time_now;

   /* 1970�� 1�� 1�� 00:00:00 UTC ������ �ð��� �� ������ ���� time_now�� ���� */
   time(&time_now);
   /* time_t �� �ð� ���� time_now�� ����ڰ� �˾ƺ��� ���� ���ڿ��� ��ȯ�Ͽ� ��� */
   printf(ctime(&time_now));
}