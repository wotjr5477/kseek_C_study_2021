#include <stdio.h>

main()
{
   FILE *ifp, *ofp;
   int ch;

   /* source ������ �б� �������� ���� */
   ifp = fopen("source", "r");
   /* result ������ ���� �������� ���� */
   ofp = fopen("result", "w");

   /* ifp ���Ϸκ��� �� ���� �б� */
   while((ch=fgetc(ifp)) != EOF)
      /* ���� ���� ofp ���Ͽ� ���� */
      fputc(ch, ofp);

   /* ���� �ݱ� */
   fclose(ifp);
   fclose(ofp);
}