#include <stdio.h>
main()
{
   int ch;

   /* Ű����κ��� �ϳ��� ���ڸ� �Է¹޾� ch�� ���� */
   while((ch=getchar()) != EOF) {
      /* ch�� ����� ������ '\n'�̸� */
      if (ch == '\n') {
         break;   /* while ���� ���� �� */
      }
      putchar(ch);   /* ch�� ����� ���ڸ� ȭ�鿡 ��� */
   }
   putchar('\n');
}