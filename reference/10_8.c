#include <stdio.h>
#include <string.h>   /* memchr, strlen �Լ��� ���ǵ� ��� ���� */

main()
{
   char *string = "ABCDEABCDEABCDE";

   while(1) {
      /* string�� ����Ű�� ������ strlen(string) ����Ʈ���� ù ��° 'A'�� 
        �˻��Ͽ� �߰��ϸ� �̿� ���� �����͸� ��ȯ�Ͽ� string�� �̸� ����Ű��
        ���� �߰����� ���ϸ� NULL�� ��ȯ */
      if((string=memchr(string, 'A', strlen(string))) == NULL)
         break;   /* �߰����� ���ϸ� while �� ��� */
      printf("%s\n", string);
      /* string�� ���� ���ڸ� ����Ű���� �� */
      string++;
   }
}