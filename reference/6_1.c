#include <stdio.h>
#include <string.h>   /* strcpy �Լ��� ���ǵ� ������� */

main()
{
   /* struct car �������� ����. �� ����ü�� ����� name, year, fuel 3���̴�. */
   struct car {
      char name[10];
      int year;
      double fuel;
   };
   struct car sonata;   /* struct car �������� ���� ���� */

   /* strcpy�� ����� ����ü�� ���� sonata�� ����� ���� �����Ѵ�. */
   strcpy(sonata.name, "SONATA");
   sonata.year = 2003;
   sonata.fuel = 77.7;

   printf("%s: %dyear %gfuel\n", sonata.name, sonata.year, sonata.fuel);
}