#include <stdio.h>

main()
{
   FILE *fp;
   int ch;

   /* alphabet ������ �б� �������� ���� */
   fp = fopen("alphabet", "r");
   /* fp ���Ͽ� ���� �б�/���� �����͸� ���� ��ġ���� �������� 10 ĭ �̵� */
   fseek(fp, 10, SEEK_SET);

   /* fp ���Ϸκ��� �� ���ھ� �о ��� */
   while((ch=fgetc(fp)) != EOF) {
      putchar(ch);
   }

   fclose(fp);
}