#include <stdio.h>
#include <assert.h>   /* assert �Լ��� �����ϴ� ��� ���� */

main()
{
   FILE *fp;
   
   fp=fopen("yesdata", "r");
   /* fp�� ���̹Ƿ� �ƹ� �� ���� �ʰ� ���� ������ �����Ѵ�. */
   assert(fp);
   printf("yesdata exist\n");
   fclose(fp);   /* fp ���� */

   fp=fopen("nodata", "r");  /* nodata �����Ƿ� NULL ��ȯ */
   assert(fp);  /* fp �� �����̹Ƿ� ���� �޽��� ���, �ھ� �����ϰ� ���� */
   /* ���� ���� ������� ���� */
   printf("nodata exist\n");
   fclose(fp);

   exit(0);
}