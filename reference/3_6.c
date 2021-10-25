#include <stdio.h>

void printbit(char ch);

main( )
{
   char a, b, c;
   int select;

   while (1) {
      printf("\nselect menu: 1.AND 2.OR 3.XOR 4.exit => ");
      scanf("%d", &select);

      if (select == 1) {              /* ��Ʈ AND ���� */   
         printf("input two characters => ");
         scanf("\n%c %c", &a, &b);
         c = a&b; 
         printbit(a);
         printf(" AND ");
         printbit(b);
         printf(" = ");
         printbit(c);
      } else if (select == 2) {        /* ��Ʈ OR ���� */ 
         printf("input two characters => ");
         scanf("\n%c %c", &a, &b);
         c = a|b; 
         printbit(a);
         printf(" OR ");
         printbit(b);
         printf(" = ");
         printbit(c);
      } else if (select == 3) {       /* ��Ʈ XOR ���� */   
         printf("input two characters => ");
         scanf("\n%c %c", &a, &b);
         c = a^b;
         printbit(a);
         printf(" XOR ");
         printbit(b);
         printf(" = ");
         printbit(c);
      } else if (select == 4) {       /* ���� */        
         break;
      } else {                    /* �߸��� ���� */   
         printf("select error\n");
      }
   }
}

void printbit(char ch)    /* ch�� ����� 8��Ʈ�� ������ 2�� �ڵ�� ��� */   
{
   int i;
 
   for (i=0; i<8; i++) {
      printf("%d", (ch&0200) ? 1 : 0);   /* ch�� ���� ������ �ִ� ��Ʈ�� ��� */
      ch = ch<<1;   /* 1��Ʈ �������� ����Ʈ */
   }
}