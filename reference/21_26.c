#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

main(int argc, char *argv[])
{
   int fd, flag;
   struct {
      char name[15];
      char phone[15];
   } student;

   if ((fd = open(argv[1], O_RDWR | O_CREAT, 0644)) == -1) {
      perror("open failed");
      exit(1);
   }
   /* ���� ���� ������ �˾Ƴ� flag�� ���� */
   if ((flag=fcntl(fd, F_GETFL)) == -1) {
      perror("fcntl failed");
      exit(1);
   }

   /* ���� ������ ����Ǿ� �ִ� flag�� O_APPEND�� �߰� */
   flag |= O_APPEND;
   /* fd ������ ���� ������ flag�� ���� */
   if ((fcntl(fd, F_SETFL, flag)) == -1) {
      perror("fcntl failed");
      exit(1);
   }

   while(1) {
      printf("input name => ");
      scanf("%s", student.name);
      if (!strcmp(student.name, "quit"))
          break;
      printf("input phone number => ");
      scanf("%s", student.phone);
      write(fd, (char *)&student, sizeof(student));
   }
   close(fd);
   exit(0);
}