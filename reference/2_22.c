#include <stdio.h>
func1( );   /* func1 �Լ� ���� */
func2( );   /* func2 �Լ� ���� */
main()
{
   func1( );   /* func1 �Լ� ȣ�� */
   func2( );   /* func2 �Լ� ȣ�� */
}
/* func1 �Լ� ���� */
func1( )
{
   printf("function 1\n");
}
/* func2 �Լ� ���� */
func2( )
{
   printf("function 2\n");
}