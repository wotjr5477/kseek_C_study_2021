#include <stdio.h>
#include <unistd.h>   /* getopt �Լ��� �����ϴ� ��� ���� */

main(int argc, char *argv[])
{
   int opt;

   while ((opt = getopt(argc, argv, "lf:ai")) != -1) {
      switch(opt) {
         case 'l':
         case 'a':
         case 'i':
            printf("option : %c\n", opt);
            break;
         case 'f':
            printf("option %c's argument : %s\n", opt, optarg);
            break;
         case '?':
            printf("unknown option : %c\n", optopt);
      }
   }
   /* ó������ ���� �μ����� ���, optind�� ������ ó���ؾ� �� �μ��� argv ÷�� ���� */
   for (; optind<argc; optind++)
      printf("argument : %s\n", argv[optind]);
   exit(0);
}