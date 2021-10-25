 #include <stdio.h>
int main(void) {
	int a[4][4] = {{1,2,3,0}, {4,5,6,0}, {7,8,9,0}, {0,0,0,0}}; // 4행 4열의 2차원 배열 선언
	int i, j;
	
	for(i=0; i<3; i++) // 행, 열, 전체 합
		for (j=0; j<3; j++) {
			a[i][3] += a[i][j]; // i행 합을 a[i][3]에 저장
			a[3][j] += a[i][j]; // j열 합을 a[3][j]에 저장
			a[3][3] += a[i][j]; // 전체 합을 a[3][3]에 저장
		}

	for  (i=0; i<4; i++)
		for(j=0; j<4; j++)
			printf("%2d%s", a[i][j], (j==3) ? "\n": "");
}
