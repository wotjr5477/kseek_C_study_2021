#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

main()
{
   /* ��Ʈ ���丮�� /home/jkim/book/linux/chap22�� ���� */
   if(chroot("/home/jkim/book/linux/chap22") == -1) {
      perror("chroot failed");
      exit(1);
   }
   if(chdir("/") == -1) {   /* ��Ʈ ���丮�� �̵� */
      perror("chdir failed");
      exit(1);
   }
   if(mkdir("rootsub", 0777) == -1) {   /* rootsub ���丮�� ���� */
      perror("mkdir failed");
      exit(1);
   }
   exit(0);
}