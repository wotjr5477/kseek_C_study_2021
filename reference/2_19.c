#include <stdio.h>
/* �Լ��� ����ϱ� ���� �����Ѵ�. */
func( )
{
   printf("running function\n");
}

main( )
{
   printf("before function call\n");
   func( );   /* �Լ��� ����ǵ��� ȣ���Ѵ�. */
   printf("after function call\n");
}