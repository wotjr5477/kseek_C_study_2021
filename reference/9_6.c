#include <stdio.h>
#include <stdlib.h>   /* strtod �Լ��� ���ǵ� ��� ���� */

main()
{
   char *pt;

   /* �Ҽ��� ������ ���ڿ� "1.23"�� double �� �Ǽ��� ��ȯ�� ���� ��ȯ */
   printf("%g\n", strtod("1.23", NULL));
   /* ���� ������ ���ڿ� "0.12E12"�� �Ǽ��� ��ȯ�� ���� ��ȯ */
   printf("%g\n", strtod("0.12E12", NULL));
   /* ��ȣ ���� �����ϰ� �Ǽ� ������ ���� '-367.177'������ ó���ϰ� pt�� 
      ���� ������ 'a'�� ����Ŵ */
   printf("%g ", strtod("\t-367.177abc", &pt));
   printf("%s\n", pt);
}