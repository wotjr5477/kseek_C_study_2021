#include <stdio.h>

main(int argc, char *argv[])
{
   int i;
   /* ù ��° �μ��� ������ ��� �μ��鿡 ���� */
   for (i=1; i<argc; i++) { 
      /* ��ɶ��� �μ��� ù ���ڰ� ��-���� �ɼ� */
      if(argv[i][0] == '-') 
         printf("option : %s\n", argv[i]+1);
      /* �׷��� ������ �μ� */
      else
         printf("argument : %s\n", argv[i]);
   }
}