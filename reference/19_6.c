#include <stdio.h>
#define NDEBUG  /* NDEBUG�� �����ϸ� assert ȣ�� ������ �������� ���� */
#include <assert.h>

main()
{
   FILE *fp;
   
   fp=fopen("yesdata", "r");
   assert(fp);  /* ������� ���� */
   printf("yesdata exist\n");
   fclose(fp);
 
   fp=fopen("nodata", "r");
   assert(fp);  /* ������� ���� */
   printf("nodata exist\n");
   fclose(fp);

   exit(0);
}