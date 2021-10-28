#include<stdio.h>

// 함수 > 기능
// 함수안에 함수 생성 불가능
// 함수가 다른 함수 사용(호출)

//void func1() { // 함수 정의(선언)
//	int dan = 2;
//	for (int i = 1; i <= 9; i++) {
//		printf("%d * %d = %d\n", dan, i, dan * i);
//	}
//}

void gugu() {	//5. 구구단

	int k=1;
	int st = 1;
	int dan;

	printf("원하는 단을 입력하세요 : ");
	scanf("%d", &dan);

	if (st == 1) {
		while (k <= 9) {
			printf("%d * %d = %d\n", dan, k, dan * k);
			k++;
		}
	}

}

void ask() {

	int k = 1;
	int st = 1;
	char status;

	printf("종료하시겠습니까?(y/n) : ");
	scanf("%d", &status);

	if (status == "n") {
		k = 1;
		st = 1;
	}
	else if (status == "y") {
		k = 10;
		st = 0;
	}

	else {
		printf("다시 입력해주세요");
	}

	gugu();
}


int main() { //main>> 기본적으로 먼저 실행하는 함수
	
	gugu();

	ask();


}

