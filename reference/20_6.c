#include <stdio.h>

void output_file(FILE *fp);

main(int argc, char *argv[])
{
   FILE *fp;

   if (argc == 1) {   /* �μ� �߸��־� �����ϸ� */
      printf("Usage : a.out filename ...\n");
      exit(1);
   }

   /* ���� ���� ������ ó���� �� �ֵ��� �ݺ� */
   while (*++argv) {
      printf("\n[filename : %s]\n\n", *argv);
      /* ��ɶ��� �μ��� �ش�Ǵ� ������ �� */
      if((fp = fopen(*argv, "r")) == NULL) {
         perror("fopen failed");
         exit(2);
      }
      output_file(fp);
      fclose(fp);
   }
   exit(0);
}

void output_file(FILE *fp)
{
   int ch;

   /* �� ���ھ� �о ȭ������ ��� */
   while((ch=getc(fp)) != EOF)
      putc(ch, stdout);
}