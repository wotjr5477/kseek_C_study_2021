#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

main(int argc, char *argv[])
{
   struct stat st1, st2;

   /* argv[1]�� ���� �ɺ��� ��ũ argv[2]�� ���� */
   if (symlink(argv[1], argv[2]) == -1) {
      perror("symlink failed");
      exit(1);
   }
   /* stat�� �̿��ؼ� �ɺ��� ��ũ argv[2]�� ���� ������ st1�� ����. 
     �ɺ��� ��ũ�� ����Ű�� ���Ͽ� ���� ������ ���� */
   if (stat(argv[2], &st1) == -1) {
      perror("stat failed");
      exit(1);
   }
   /* lstat�� �̿��ؼ� �ɺ��� ��ũ argv[2]�� ���� ������ st2�� ����.
    �ɺ��� ��ũ ��ü�� ���� ������ ���� */
   if (lstat(argv[2], &st2) == -1) {
      perror("stat failed");
      exit(1);
   }
   printf("%ld bytes : %ld bytes\n", st1.st_size, st2.st_size);
   exit(0);
}