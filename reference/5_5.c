#include <stdio.h>

void func(void);

main()
{
   int i;

   for(i=0; i<10; i++)
      func();
}

void func(void)
{
   int auto_var = 0;   /* �ڵ� ���� auto_var ���� */
   static int stat_var = 0;   /* ���� ���� ���� stat_var ���� */

   /* ���� ���� ������ �ڵ� �����ʹ� �޸� �Լ��� ����� ���� ���� */ 
   printf("auto: %d  static: %d\n", ++auto_var, ++stat_var);
}