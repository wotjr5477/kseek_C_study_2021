#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#define MAX 100

main(int argc, char *argv[])
{
   char name[MAX];

   /* ���� �۾� ���丮 �̸��� �˾Ƴ��� ��� */
   getcwd(name, MAX);
   printf("directory name : %s\n", name);

   /* argv[1] ���丮�� �����ϰ� �̵� */
   mkdir(argv[1], 0755);
   chdir(argv[1]);
   getcwd(name, MAX);
   printf("directory name : %s\n", name);

   /* ���� ���丮�� �̵� */
   chdir("..");
   getcwd(name, MAX);
   printf("directory name : %s\n", name);

   /* argv[1] ���丮�� ���� */
   rmdir(argv[1]);

   exit(0);
}