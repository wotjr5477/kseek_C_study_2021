#include <stdio.h>
#include <string.h>   /* strerror �Լ��� �����ϴ� ��� ���� */

main()
{
   int i;

   /* ���� ��ȣ 1-124�� ���� ���� ��� */
   for (i=0; i<125; i++)
      printf("[%3d] %s\n", i, strerror(i));
   exit(0);
}