#include <sys/types.h>
#include <sys/stat.h>

main()
{
   /* jkim�� ���� ������ 0644�� ����. 
     �����ڴ� �б�, ���� ����, �׷�� ��Ÿ ����ڵ��� �б� ������ �ο� */
   if (chmod("jkim", 0644) == -1)
      perror("chmod failed");
   /* kang�� ���� ������ ����.
     �����ڴ� �б�, ���� ����, �׷�� ��Ÿ ����ڵ��� �б� ������ �ο� */
   if (chmod("kang", S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) == -1)
      perror("chmod failed");
   exit(0);
}