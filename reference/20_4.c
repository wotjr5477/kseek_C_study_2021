#include <stdio.h>
#include <unistd.h>   /* getopt �Լ��� �����ϴ� ��� ���� */

main(int argc, char *argv[])
{
   int opt;
   /* ��ɶ����� l, f, a, i, �ɼ��� ó�� */
   while ((opt = getopt(argc, argv, "lf:ai")) != -1) {
      switch(opt) {
         /* l, a, i �ɼ��̸� �ɼ��� ��� */
         case 'l':
         case 'a':
         case 'i':
            printf("option : %c\n", opt); 
            break;
         /* f �ɼ��̸� �ɼǰ� �μ��� ��� */
         case 'f': 
            printf("option %c's argument : %s\n", opt, optarg);
            break;
         /* �νĵ��� �ʴ� �ɼ� ��� */
         default:
            printf("unknown option : %c\n", optopt);
      }
   }
   exit(0);
}