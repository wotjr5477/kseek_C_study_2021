#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#define MAX 512

main(int argc, char *argv[])
{
   DIR *dp;
   struct dirent *dirp;
   char *dir;
   char filename[MAX];
   char list[MAX];
   char buf[MAX];
   struct stat st;
   int index;
   int i;

   /* ��ɶ��� �μ��� 1����� ���� �۾� ���丮�� ���� ���� */
   if (argc == 1)
      dir = ".";
   /* �׷��� ������ argv[1] ���丮�� ���� ���� */
   else
      dir = argv[1];
   if((dp=opendir(dir)) == NULL) {   /* dir ���丮 ���� */
      perror("opendir failed");
      exit(1);
   }

   while (dirp=readdir(dp)) {   /* dp ���丮�� ��� �׸�鿡 ���� ó�� */
      index = 0;
      if (!strncmp(dirp->d_name, ".", 1))   /* ��.������ ���۵Ǵ� �׸��� ó������ ���� */
         continue;
      sprintf(filename, "%s/%s", dir, dirp->d_name);
      if (lstat(filename, &st) == -1) {   /* filename�� ���� ������ st�� ���� */
         perror("stat failed");
         exit(1);
      }
      /* ���� ������ �˾Ƴ��� ���� ������ ��-����, ���丮�� ��d����, 
         FIFO ������ ��p����, �׸��� ��ũ�� ��l���� list[0]�� ���� */
      switch (st.st_mode & S_IFMT) {
         case S_IFREG :
            list[index++] = '-';
            break;
         case S_IFDIR :
            list[index++] = 'd';
            break;
         case S_IFIFO :
            list[index++] = 'p';
            break;
         case S_IFLNK :
            list[index++] = 'l';
      }
      /* ���� ���� ���� �˾Ƴ��� */
      for (i=0; i<3; i++) {
         if (st.st_mode & (S_IREAD >> i*3))
            list[index++] = 'r';
         else
            list[index++] = '-';
         if (st.st_mode & (S_IWRITE >> i*3))
            list[index++] = 'w';
         else
            list[index++] = '-';
         if (st.st_mode & (S_IEXEC >> i*3))
            list[index++] = 'x';
         else
            list[index++] = '-';
      }
      list[index] = '\0';   /* ���ڿ��� �������� �ǹ� */
      /* ��ũ ��, ���� ������ */
      printf("%s%5d %s ", list, st.st_nlink, (getpwuid(st.st_uid))->pw_name);
      /* ���� �׷� �̸�, ���� ũ�� */
      printf("%s%9d ", (getgrgid(st.st_gid))->gr_name, st.st_size);
      /* ���� ���� ���� ���� �ð� */
      sprintf(buf, "%s", ctime(&st.st_mtime));
      /* ���Ͽ� ���� ���� ���� �ð��� ctime(&st.st_mtime)�� ����ϸ� ������
        �ڵ������� �̷�����Ƿ� ������ �Ͼ�� �ʵ��� ��\n' ��ġ�� ��\0���� ���� */ 
      buf[strlen(buf)-1] = '\0';
      printf("%s %s\n", buf, dirp->d_name);   /* ���� �̸� */
   }
   closedir(dp);
   exit(0);
}