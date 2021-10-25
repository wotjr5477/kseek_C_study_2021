#include <stdio.h>
#include <unistd.h>

main(int argc, char *argv[])
{
   if (symlink(argv[1], argv[2]) == -1) {   /* argv[1]�� ���� �ɺ��� ��ũ argv[2]�� ���� */
      perror("symlink failed");
      exit(1);
   }
   printf("link %s to %s\n", argv[1], argv[2]);
   exit(0);
}