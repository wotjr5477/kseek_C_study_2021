#include <stdio.h>

/* ��ɶ��� �μ��� �����´�. argc���� �μ��� ������, argv���� �μ��� ������ �����Ѵ�. */
main(int argc, char *argv[])
{
   int i;

   printf("argc : %d\n", argc);   /* �μ��� ���� ��� */

   /* �μ��� ���� ��� */
   for(i=0; i<argc; i++)
      printf("argv[%d] : %s\n", i, argv[i]);

   exit(0);
}