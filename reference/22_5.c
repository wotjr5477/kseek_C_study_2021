#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

main(int argc, char *argv[])
{
   struct stat st;

   if (stat(argv[1], &st) == -1) {
      perror("stat failed");
      exit(1);
   }

   if(S_ISREG(st.st_mode)) {   /* ���� �����̸� */
      printf("regular\n");
   } else if(S_ISDIR(st.st_mode)) {   /* ���丮�̸� */
      printf("directory\n");
   } else if(S_ISCHR(st.st_mode)) {   /* ���� Ư�� �����̸� */
      printf("character special\n");
   } else if(S_ISBLK(st.st_mode)) {   /* ��� Ư�� �����̸� */
      printf("block special\n");
   } else if(S_ISFIFO(st.st_mode)) {   /* FIFO �����̸� */
      printf("fifo\n");
   }
   exit(0);
}