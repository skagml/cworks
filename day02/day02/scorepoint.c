#include <stdio.h>

int main() {
	//학점을 판정하는 프로그램
	//90점이상 A, 80점이상 B, 70점이상 C, 60점 이상 D, 60점 미만 F

	//int score = 77;
	//char ch = 'A';
	int score;
	char ch;
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);

	if ( score >= 90) {
		ch = 'A';
	}
	else if ( score >= 80) {
		ch = 'B';
	}
	else if (score >= 70) {
		ch = 'C';
	}
	else if (score >= 60) {
		ch = 'D';
	}
	else {
		ch = 'F';
	}
	printf("%c학점입니다.\n", ch);


	return 0;


}