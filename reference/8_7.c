#include <stdio.h>
#include <string.h>   /* strcpy �Լ��� ���ǵ� ��� ���� */
#define MAX 20

main()
{
   char buffer1[MAX];
   char buffer2[MAX];

   /* ���ڿ� 'Linux'�� buffer1�� ���� */
   strcpy(buffer1, "Linux");
   printf("%s\n", buffer1);
   strcpy(buffer2, "Programming");
   printf("%s\n", buffer2);
   /* buffer1�� buffer2�� ����. buffer2�� ����Ǿ� �ִ� ������ ���� �� */
   strcpy(buffer2, buffer1);
   printf("%s\n", buffer2);
}