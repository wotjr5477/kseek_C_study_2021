#include <stdio.h>
#include <unistd.h>   /* getopt �Լ��� �����ϴ� ��� ���� */

void output_file(FILE *fp);

int flag=0;

main(int argc, char *argv[])
{
   FILE *fp;
   int opt;

   if (argc == 1) {   /* ��ɶ��ο��� �Է��� �߸��ϸ� */
      printf("Usage : a.out [-n] filename ...\n");
      exit(1);
   }

   /* ��ɶ����� n �ɼ��� ó�� */
   while((opt = getopt(argc, argv, "n")) != -1) {
      switch(opt) {
         /* n �ɼ��̸� flag�� 1�� ���� */
         case 'n':
            flag = 1;
            break;
         /* �νĵ��� �ʴ� �ɼ��̸� ���� �޽��� ��� */
         default:
            printf("unknown option : %c\n", optopt);
      }
   }
   
   /* ��ɶ��� �μ��� 2�� �ƴ϶�� ���� -n �ɼ��� �ִٴ� �ǹ��̹Ƿ� �����̸���
      ��� ���� argv�� 1 ���� */
   if(argc != 2)
      argv++;
 
   /* ���� ���� ������ ó���� �� �ֵ��� �ݺ� */
   while (*++argv) {
      printf("\n[filename : %s]\n", *argv);
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
   int ch, line=1;

   if(flag)
      printf("1   ");
   while((ch=getc(fp)) != EOF) {
      if(flag && ch=='\n') {
         /* ���� ���ڰ� EOF�� ������� �ʰ� ���� ���� */
         if((ch=getc(fp)) == EOF)
            break;
         /* ch�� fp ���Ϸ� �ǵ��� */
         ungetc(ch, fp);
         printf("\n%-4d", ++line);
      } else
         putc(ch, stdout);
   }
   printf("\n");
}