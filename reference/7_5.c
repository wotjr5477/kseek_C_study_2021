#include <stdio.h>
#define NAME   /* ġȯ ���ڿ��� ������ �̰͵� ���ǵ� ���� */

main()
{
/* NAME�� ���ǵǾ� ������ */
#ifdef NAME
   printf("NAME defined\n");
#endif

/* NAME�� ���ǵǾ� ���� ������ */
#ifndef NAME
   printf("NAME undefined\n");
#endif
 
/* ADDRESS�� ���ǵǾ� ���� ������ */
#ifndef ADDRESS
   printf("ADDRESS undefined\n");
#endif
}