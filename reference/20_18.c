#include <stdio.h>
#include <pwd.h>
#include <sys/types.h>

main()
{
   struct passwd *pw;

   /* �н����� ���Ϸκ��� ����� ������ ���ʷ� �о� ��� */
   while (pw = getpwent()) {
      /* pw->pw_name�� ����� ����, pw->pw_uid�� ����� ID, 
         pw->pw_dir�� ������� Ȩ ���丮�� �ǹ� */
      printf("name:%s, uid:%d, home:%s\n", pw->pw_name, pw->pw_uid, pw->pw_dir);
   }
   /* ����� ���� �н����� ������ ���� */
   endpwent();
   exit(0);
}