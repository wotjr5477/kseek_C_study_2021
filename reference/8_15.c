#include <stdio.h>
#include <string.h>   /* strtok �Լ��� ���ǵ� ��� ���� */

main()
{
   char str[]="Hello Linux C Programming";
   /* � �����ڸ� �������� �ܾ�� �ڸ����� �����ϴ� �� �� ���α׷�������
     ���� ����(" ")�� �̿��ϰ� ���� �����ڷ� ;, : �� �̿��Ϸ��� ";:"�� �����ϸ� �� */
   char delim[]=" ";
   char *ptr;

   /* ���ڿ� str���� delim �����ڰ� ������ �ܾ�� �ڸ��� �ܾ��� ù ���ڿ� ���� 
      ������ ��ȯ */
   ptr = strtok(str, delim);
   printf("%s\n", ptr);
   /* �� ��° ȣ����ʹ� NULL�� �����ؾ� �� */
   while(ptr=strtok(NULL, delim))
      printf("%s\n", ptr);
}