#include <stdio.h>

main()
{
   int ch;

   while((ch=getchar()) != EOF) {
      /* ch�� ���� �ҹ����̸� */
      if(ch>='a'&&ch<='z')
         /* �빮�ڷ� ��ȯ�ϴ� �κ��ε� ���� ch�� ��c'�� ����Ǿ� �ִٰ� �����ϸ� 
            'c'-'a'�� 2�� �ǰ� 2+'A'�� 'C'�� �Ǿ� ���� �빮�ڷ� ��ȯ */
         ch = ch-'a'+'A';
      putchar(ch);
   }
   putchar('\n');
}