#include <stdio.h>
#define MAX 1024

main()
{
   FILE *fp;
   char buffer[MAX];
   int ch, chk=0;

   /* source ������ �б� �������� ���� */
   fp = fopen("source", "r");

   /* fp ������ ������ �ݺ� */
   while((ch=fgetc(fp))!= EOF) {
      /* ���� ���ڰ� 'L'�̸� */
      if(ch == 'L') {
         chk = 1;
         break;
      }
   }

   /* ��� ���� ���� ���ڰ� 'L' �̸� */
   if(chk==1) {
      /* fp ���Ϸ� ��� ���� ���� 'L'�� �ǵ��� */
     ungetc(ch, fp);
     /* fp ������ �� �������� ���ڿ� �о� buffer�� ���� */
     fgets(buffer, MAX, fp);
      printf("%s\n", buffer);
   } else {
      printf("Not found\n");
   }

   fclose(fp);
}