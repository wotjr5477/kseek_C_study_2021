#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

main(int argc, char *argv[])
{
   struct stat st;

   /* argv[1] ���Ͽ� ���� ������ st�� ���� */
   if (stat(argv[1], &st) == -1) {
      perror("stat failed");
      exit(1);
   }
   /* st.st_size�� ������ ũ��, st.st_uid�� ���� ������ ID, st.st_mtime�� ���Ͽ� 
     ���� ���� ���� �ð�����, ctime�� �ð� ������ ���ڿ��� ��ȯ�ϴ� �Լ� */
   printf("%ld byte, user-id %d, group-id %d, modify time %s", st.st_size, st.st_uid, st.st_gid, ctime(&st.st_mtime));
   exit(0);
}