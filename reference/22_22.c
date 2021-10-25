#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>

main(int argc, char *argv[])
{
   struct stat st;

   if (stat(argv[1], &st) == -1) {   /* argv[1] ���Ͽ� ���� ������ st�� ���� */
      perror("stat failed");
      exit(1);
   }
   /* argv[2]�� �����ڿ� �׷��� st.st_uid�� st.st_gid�� ���� */
   if (chown(argv[2], st.st_uid, st.st_gid) == -1) {
      perror("chown failed");
      exit(1);
   }
   exit(0);
}