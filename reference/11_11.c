#include <stdio.h>

main()
{
   FILE *fp;
   int ch;

   /* source ������ �б� �������� ���� */
    fp = fopen("source", "r");

   /* fp ���Ϸκ��� �� ���� �о� ch�� ���� */
   ch = fgetc(fp);
   ch = fgetc(fp);
   /* fp ���Ͽ� ���� �б�/���� �����͸� ��� */
   printf("%ld\n", ftell(fp));

   /* fp ���Ͽ� ���� �б�/���� �����͸� ó������ �ǵ��� �б�/���� ������ ���� 0�� �� */
   rewind(fp);
   printf("%ld\n", ftell(fp));

   fclose(fp);
}