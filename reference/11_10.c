#include <stdio.h>

main()
{
   FILE *fp;
   int ch='a';

   /* source ������ �б� �������� ���� */
   fp = fopen("source", "r");

   /* �б� ������ fp ���Ͽ� ch�� ������ �ϹǷ� ���� �߻� */
   fputc(ch, fp);

   /* fp ������ ������� */
   if(ferror(fp)) 
      puts("error");
   /* fp ������ ������ �ƴ϶�� */
   else
      puts("no error");

   /* ���� ������ �ʱ�ȭ */
   clearerr(fp);
   if(ferror(fp)) 
      puts("error");
   else
      puts("no error");

   fclose(fp);
}