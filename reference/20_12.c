#include <stdio.h>
#include <stdlib.h>   /* getenv, putenv �Լ��� �����ϴ� ��� ���� */

main()
{
   char *home_dir;

   /* HOME ȯ�� ���� ���� ��� �ͼ� ��� */
   if((home_dir=getenv("HOME")) != NULL)
      printf("home directory : %s\n", home_dir);

   /* HOME ȯ�� ���� ���� /home/jkim/book/linux�� ���� */
   putenv("HOME=/home/jkim/book/linux");

   if((home_dir=getenv("HOME")) != NULL)
      printf("home directory : %s\n", home_dir);
}