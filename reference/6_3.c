#include <stdio.h>

main()
 {
   union position {   /* ����ü ���� */
      int class;
      char department[10];
   } my;   /* ���� ���� */
   int chk; 

   printf("select number (highschool : 1, university : 2) ==> ");
   scanf("%d", &chk);

   if (chk == 1) {   /* ����л��̸� */
      printf("class ==> ");
      scanf("%d", &(my.class));
   } else {   /* ���л��̸� */
      printf("major ==> ");
      scanf("%s", my.department);
   }

   if (chk == 1) {   /* ����л��̸� */
      printf("highschool : %d class\n", my.class);
   } else {   /* ���л��̸� */
      printf("university : %s major\n", my.department);
   }
}