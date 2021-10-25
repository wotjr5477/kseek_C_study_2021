#include <stdio.h>
#include <unistd.h>   /* getopt 함수를 정의하는 헤더 파일 */

void output_file(FILE *fp);

int flag=0;

main(int argc, char *argv[])
{
   FILE *fp;
   int opt;

   if (argc == 1) {   /* 명령라인에서 입력을 잘못하면 */
      printf("Usage : a.out [-n] filename ...\n");
      exit(1);
   }

   /* 명령라인의 n 옵션을 처리 */
   while((opt = getopt(argc, argv, "n")) != -1) {
      switch(opt) {
         /* n 옵션이면 flag에 1을 저장 */
         case 'n':
            flag = 1;
            break;
         /* 인식되지 않는 옵션이면 오류 메시지 출력 */
         default:
            printf("unknown option : %c\n", optopt);
      }
   }
   
   /* 명령라인 인수가 2가 아니라는 것은 -n 옵션이 있다는 의미이므로 파일이름을
      얻기 위해 argv를 1 증가 */
   if(argc != 2)
      argv++;
 
   /* 여러 개의 파일을 처리할 수 있도록 반복 */
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
         /* 다음 문자가 EOF면 출력하지 않고 빠져 나옴 */
         if((ch=getc(fp)) == EOF)
            break;
         /* ch를 fp 파일로 되돌림 */
         ungetc(ch, fp);
         printf("\n%-4d", ++line);
      } else
         putc(ch, stdout);
   }
   printf("\n");
}