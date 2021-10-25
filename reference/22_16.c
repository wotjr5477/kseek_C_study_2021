#include <stdio.h>
#include <unistd.h>

main(int argc, char *argv[])
{
   /* argv[1]�� ���� ��ũ argv[2]�� �����Ͽ� argv[1]�� argv[2]�� ���� ������ �� */
   if (link(argv[1], argv[2]) == -1) {
      perror("link failed");
      exit(1);
   }
   /* argv[1] ��ũ�� �����ϳ� argv[2]�� �������� ����. 
     �ᱹ argv[1]�� argv[2]�� �̸��� ���� */
   if (unlink(argv[1]) == -1) {
      perror("unlink failed");
      unlink(argv[2]);
      exit(1);
   }
   printf("move %s to %s\n", argv[1], argv[2]);
   exit(0);
}