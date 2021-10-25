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

   /* st.st_mode & S_IFMT�� ���� ������ �˾Ƴ��� ���� */
   switch (st.st_mode & S_IFMT) {
      case S_IFREG:   /* ���� �����̸� */
         printf("regular\n");
         break;
      case S_IFDIR:   /* ���丮�̸� */
         printf("directory\n");
         break; 
      case S_IFCHR:   /* ���� Ư�� �����̸� */
         printf("character special\n");
         break; 
      case S_IFBLK:   /* ��� Ư�� �����̸� */
         printf("block special\n");
         break; 
      case S_IFIFO:   /* FIFO �����̸� */
         printf("fifo\n");
   }
   exit(0);
}