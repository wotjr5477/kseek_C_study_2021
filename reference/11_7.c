#include <stdio.h>

main()
{
   FILE *fp;
   int i;
   float j;
   char *str;

   /* data ������ ���� �������� ����. ��ȯ�Ǵ� ���� data ���Ͽ� ���� ������ */
   fp = fopen("data", "w");
   /* fp ���Ͽ� 123, 12.345, "Hello"�� ����ȭ�Ͽ� ���� */
   fprintf(fp, "%d %g %s\n", 123, 12.345, "Hello");
   fclose(fp);

   /* data ������ �б� �������� ���� */
   fp = fopen("data", "r");
   /* fp ���Ϸκ��� �����͸� ����ȭ�Ͽ� �о� i, j, str�� ���� */
   fscanf(fp, "%d%g%s", &i, &j, str);
   printf("%d %g %s\n", i, j, str);
   fclose(fp);
}