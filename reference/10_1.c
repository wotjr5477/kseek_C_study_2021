#include <stdio.h>
#include <stdlib.h>   /* malloc �Լ��� ���ǵ� ��� ���� */
#include <string.h>   /* strcpy �Լ��� ���ǵ� ��� ���� */

main()
{
   /* �ڱ� ���� ����ü ���� */
   struct list {
      char name[10];
      int age;
      struct list *next;
   };
   struct list *ptr;

   /* struct list �� ũ���� ���� �޸� �Ҵ��ϰ� ptr�� ����Ŵ */
   if((ptr=(struct list *)malloc(sizeof(struct list))) == NULL)
      exit(1);   /* ���α׷��� ���� */
   strcpy(ptr->name, "jkim");
   ptr->age = 30;

   /* struct list �� ũ���� ���� �޸� �Ҵ��ϰ� ptr->next�� ����Ŵ */
   if((ptr->next=(struct list *)malloc(sizeof(struct list))) == NULL)
      exit(1);
   strcpy(ptr->next->name, "kang");
   ptr->next->age = 25;

   printf("%s's age: %d\n", ptr->name, ptr->age);
   printf("%s's age: %d\n", ptr->next->name, ptr->next->age);
}