#include <stdio.h>   /* fopen, fclose �Լ��� ���ǵ� ��� ���� */

main()
{
   FILE *fp;   /* FILE ���� stdio.h ��� ���Ͽ� ���ǵǾ� ���� */

   /* jkim ������ �б� �������� ����. 
     ��ȯ�Ǵ� ���� jkim ���Ͽ� ���� ���� �����ͷ� fp�� ���� */
   fp = fopen("jkim", "r");
   /* fp ������ �ݱ�. fp�� fopen�� ���� ��ȯ�� �� */
   fclose(fp);
}