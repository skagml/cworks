#include <stdio.h>

int main() {
	//조건 연산자 - 조건식? 참(1) : 거짓(0)
	int value;
	value = (3 > 4) ? 10 : 20;
	printf("결과 값 : %d\n", value); //20

	int fatherAge = 35;
	int motherAge = 38;

	printf("%d\n", fatherAge); //저장 값
	printf("%x\n", &fatherAge); //&주소의 값

	char ch = (fatherAge > motherAge) ? 'T':'F';
	printf("결과 값 : %c\n", ch); //F
	return 0;
}