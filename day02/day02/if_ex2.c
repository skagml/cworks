#include <stdio.h>

int main() {

	//놀이공원 입장료 계산 - 미취학 아동, 초등학생, 중.고등학생, 일반인
	int age = 10;
	int charge = 0;

	//나이 별로 조건 처리
	if (age < 8) {
		charge = 1000;
		printf("미취학아동입니다.\n");
	}
	else if (age >=8 && age < 14) { //1 && 1
		charge = 2000;
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age < 20) {
		charge = 2500;
		printf("중.고등학생입니다.\n");
	}
	else { //age >= 20
		charge = 3000;
		printf("일반인입니다.\n");
	}
	printf("입장료는 %d원입니다.\n");


	return 0;
}