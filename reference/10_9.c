#include <stdio.h>
#include <string.h>   /* memcmp �Լ��� ���ǵ� ��� ���� */

main()
{
   char *quit = "quit";
   char *string;

   while(1) {
      printf("Input string ==> ");
      scanf("%s", string);
      /* string�� quit�� ó�� 4 ����Ʈ�� ���� ������ 0�� ��ȯ�ϹǷ� ������ ���� �� */
      if(!memcmp(string, quit, 4))
         break;
      printf("%s\n", string);
   }
}