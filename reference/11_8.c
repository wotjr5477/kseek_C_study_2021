#include <stdio.h>
#define MAX 1024

main()
{
   FILE *ifp, *ofp;
   char buffer[MAX];
   int num;
   /* source ������ �б� �������� ���� */
   ifp = fopen("source", "r");
   /* result ������ ���� �������� ���� */
   ofp = fopen("result", "w");

   /* ifp ���Ϸκ��� 1 ����Ʈ ũ���� MAX �� �����͸� �Է¹޾� buffer�� ����.
     ��ȯ�Ǵ� ���� ���� ���� �������� �� */
   num = fread(buffer, 1, MAX, ifp);
   /* buffer���� 1 ����Ʈ ũ���� num ���� �����͸� ofp ���Ͽ� ��� */
   fwrite(buffer, 1, num, ofp);

   /* ���� �ݱ� */
   fclose(ifp);
   fclose(ofp);
}