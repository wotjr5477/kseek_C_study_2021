#include <stdio.h>
#include <errno.h>   /* errno ������ �����ϴ� ��� ���� */

main()
{
   FILE *fp;

   /* fopen �Լ� ȣ�⿡ �����ϸ� NULL�� ��ȯ */
   if ((fp=fopen("nodata", "r")) == NULL) {  
      printf("errno = %d\n", errno);  /* ���� �߻��ϸ� errno�� ���� ��ȣ ���� */
      exit(1);   /* �����ϱ� */
   }
   exit(0);   /* �����ϱ� */
}