/*#include <stdio.h>
#define ADD(x, y) ((x) + (y))  //더하기 매크로 함수
#define MUL(x, y) ((x) * (y))    //곱하기 매크로 함수 정의

int ADD(int x, int y) {  //일반 함수
	return x + y;
}

int main() {
	
	int a = 10, b = 20;
	int result;

	printf("a + b = %d\n", ADD(a, b));  //a + b
	result = 30 / MUL(2, 5);  //30 / (2 x 5) - 괄호 생략시 오류
	printf("a + b = %d\n", result);
	return 0;
}*/