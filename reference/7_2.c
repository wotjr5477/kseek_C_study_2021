#include <stdio.h>
/* �Ű����� �ִ� ��ũ�ο� ���� ���Ƿ� MAX�� (A, B) ���̿� ������ �־�� �� �ȴ�. */
#define MAX(A, B) ((A)>(B) ? (A) : (B))   /* �Ű����� �ִ� ��ũ�� ���� */

main()
{
   int i, j;
   printf("Input two integer ==> ");
   scanf("%d %d", &i, &j);
   /* ��ũ�θ� �̿��� ��ó���ϸ� MAX(i, j)�� ((i)>(j) ? (i) : (j))�� �ٲ��. */
   printf("max number : %d\n", MAX(i, j));
}