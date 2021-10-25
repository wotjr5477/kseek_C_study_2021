#include <stdio.h>
#include <time.h>   /* time, localtime, asctime, strftime �Լ��� ���ǵ� ��� ���� */
#define SIZE 124

main()
{
   time_t time_now;
   struct tm *tm_local;
   char buf[SIZE];

   /* 1970�� 1�� 1�� 00:00:00 UTC ������ �ð��� �� ������ ���� time_now�� ���� */
   time(&time_now);
   /* time_t �� �ð� ���� time_now�� struct tm �� ���� �ð� ������ ��ȯ�ؼ�
     tm_local�� ���� */
   tm_local = localtime(&time_now);

   /* struct tm �� �ð� ���� tm_local�� ���ڿ��� ��ȯ�ؼ� ��� */
   printf("%s", asctime(tm_local));

   /* struct tm �� �ð� ���� tm_local�� ������ ���� �ð� ������ ��ȯ�ϴµ�
     ��ȯ ���ڿ� %c�� ���� ��¥�� �ð��� �ǹ� */
   strftime(buf, sizeof(buf), "%c", tm_local);
   printf("%s\n", buf);
}