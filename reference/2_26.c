#include <stdio.h>
void func(void);
main( )
{
   printf("before function call\n");
   func( );
   printf("after function call\n");
}
/* ��ȯ���� �Ű������� ������ void�� ����ϰ� �Լ� ���� */
void func(void)
{
   printf("running function\n");
}