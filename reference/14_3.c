#include <stdio.h>
#include <time.h>   /* time, localtime �Լ��� ���ǵ� ��� ���� */

main()
{
   time_t time_now;
   struct tm *tm;

   /* 1970�� 1�� 1�� 00:00:00 UTC ������ �ð��� �� ������ ���� time_now�� ���� */
   time(&time_now);
   /* time_t �� �ð� ���� time_now�� struct tm �� ���� �ð� ������ ��ȯ�ؼ� tm�� ���� */
   tm = localtime(&time_now);

   /* %02d�� �����ϸ� 2�ڸ��� 10�� ���� ���·� ����ϵ� �� �ڸ� ���� ���ڸ���
     ��� �Ǹ� 0�� ä�� */
   printf("%02d/%02d/%4d ", tm->tm_mon+1, tm->tm_mday, tm->tm_year+1900);
   printf("%02d:%02d:%02d\n", tm->tm_hour, tm->tm_min, tm->tm_sec);
}