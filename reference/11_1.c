#include <stdio.h>   /* getchar, putchar �Լ��� ���ǵ� ��� ���� */
#include <ctype.h>   /* tolower �Լ��� ���ǵ� ��� ���� */

main()
{
   int ch;

   /* ǥ�� �Է����� �� ���� �Է¹޾� ch�� ����
      �Է¹��� ���� ������ ���� �ǹ��ϴ� EOF�̸� while ���� ��� */
   while((ch=getchar()) != EOF) {
      /* ch�� ǥ�� ������� ���. ���� ch�� �빮���̸� �ҹ��ڷ� ��ȯ�� ��� */
      putchar(tolower(ch));
   }
}