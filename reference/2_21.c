#include <stdio.h>
func( );   /* func��� �Լ��� �ִٴ� ������ �����Ϸ��� �˷��ֱ� ���� �Լ� ���� */
main( )
{
   printf("before function call\n");
   func( );   /* func �Լ��� ����� ���ǰ� �Ǿ������Ƿ� �Լ� ȣ�⿡ �����Ѵ�.*/
   printf("after function call\n");
}
func( )   /* �Լ� ���� */
{
   printf("running function\n");
}