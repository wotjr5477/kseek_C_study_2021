#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

main(int argc, char *argv[])
{
   int i;
   struct stat st;

   for (i=1; i<argc; i++) {
      if (stat(argv[i], &st) == -1) {
         perror("stat failed");
         exit(1);
      }
      /* ���� ���İ� ���� ���� ���� ������ �����ϰ� �ִ� st.st_mode�� 
         16���� ���·� ����ϴµ�, 4�ڸ� �� ù ��° ���� ���� ������ ��Ÿ�� */
      printf("%s's mode : %x\n", argv[i], st.st_mode);
   }

   exit(0);
}