#include <stdio.h>
#include <string.h>   /* strerror �Լ��� �����ϴ� ��� ���� */

main()
{
   FILE *fp;

   /* fopen �Լ� ȣ�⿡ �����ϸ� NULL�� ��ȯ */
   if ((fp=fopen("nodata", "r")) == NULL) {
      /* errno�� �����ϴ� ���ڿ��� ǥ�� ������ ����ͷ� ��� */
      fprintf(stderr, "ERROR: %s\n", strerror(errno));
      exit(1);
   }
   exit(0);
}