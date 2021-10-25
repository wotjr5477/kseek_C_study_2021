#include <stdio.h>
#include <stdlib.h>   /* getenv �Լ��� �����ϴ� ��� ���� */

main()
{
   char *home_dir, *work_dir;

   /* getenv�� �̿��� HOME�� ���� ȯ�� ���� �� ��� �� */
   if((home_dir=getenv("HOME")) != NULL)
      printf("home directory : %s\n", home_dir);

   /* getenv�� �̿��� PWD�� ���� ȯ�� ���� �� ��� �� */
   if((work_dir = getenv("PWD")) != NULL)
      printf("working directory : %s\n", work_dir);
 
   /* LINUX��� ȯ�� ������ �����Ƿ� NULL�� ��ȯ */
   if((tmp = getenv("LINUX")) != NULL)
      printf("temp : %s\n", tmp);
}