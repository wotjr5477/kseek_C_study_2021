#include <stdio.h>
#include <stdlib.h>   /* getenv, setenv �Լ��� �����ϴ� ��� ���� */
#include <string.h>   /* strcpy, strcat �Լ��� �����ϴ� ��� ���� */

main(int argc, char *argv[])
{
   char *value, *string;

   if(argc==1 || argc>3) {
      printf("Usage : a.out variable [value]\n");
      exit(1);
   }

   /* argv[1] ȯ�� ���� ���� ��� �ͼ� ��� */
   if((value=getenv(argv[1])) != NULL)
      printf("%s : %s\n", argv[1], value);
   else
      printf("%s : no value\n", argv[1]);

   /* ��ɶ��� �μ��� 3���� */
   if(argc == 3) {
      /* �޸𸮸� �������� �Ҵ� ���� */
      string = malloc(strlen(argv[1])+strlen(argv[2])+2);
      /* argv[1]�� string�� ���� */
      strcpy(string, argv[1]);
      /* string �ڿ� ��=���� ���� */
      strcat(string, "=");
      strcat(string, argv[2]);

      /* ȯ�� ���� ���� ���� */
      putenv(string);

      /* ����� ȯ�� ���� ���� ��� �ͼ� ��� */
      if((value=getenv(argv[1])) != NULL)
         printf("%s's new value : %s\n", argv[1], value);
      else
         printf("error : %s\n", string);      
   }
   exit(0);
}