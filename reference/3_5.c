#include <stdio.h>
main()
{
   int ch, numl=0, nums=0;
   /* �ϳ��� ���ڸ� Ű����� �Է¹޾� ch�� �����ϰ�, ch�� ������ EOF�� �ƴϸ� 
      �����ϰ� EOF�̸� while ���� �����. ���⼭ EOF�� End Of File�� 
      ������ ���� �ǹ��Ѵ�. */
   while ((ch=getchar()) != EOF) {
      /* ch�� ��A'���� ũ�ų� ���� 'Z'���� �۰ų� ������, ��, ch�� �����빮�ڶ�� */
      if ((ch>='A') && (ch<='Z'))
         numl++;
      /* ch�� 'a'���� ũ�ų� ���� 'z'���� �۰ų� ������, ��, ch�� �����ҹ��ڶ�� */
      else if ((ch>='a') && (ch<='z'))
         nums++;
   }
   printf("%d %d\n", numl, nums);
}