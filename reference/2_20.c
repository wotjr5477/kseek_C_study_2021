#include <stdio.h>
main( )
{
   printf("before function call\n");
   func( );   /* �Լ� ȣ�� */
   printf("after function call\n");
}
/* �Լ� ���� */
func( )
{
   printf("running function\n");
}
