#include <stdio.h>
#include <string.h>   /* strspn �Լ��� ���ǵ� ��� ���� */

main()
{
   int n;

   /* "seoulKorea"���� "elmnopsu"�� ���ڵ�θ� �̷���� ó�� ���ڿ��� "seoul"
      ���ڿ��� ������ 5�� ��ȯ */
   n = strspn("seoulKorea", "elmnopsu");
   printf("%d\n", n);
}