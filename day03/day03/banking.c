#include <stdio.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//은행업무 프로그램
	//int sw = 1; //스위치변수 - 실행, 중단을 구분
	bool sw = true;
	int balance = 0; //잔고
	while (sw) {
		int selNo; //선택 변수
		int money; //입출금 변수
		printf("===============================\n");
		printf("1.예금| 2.출금 | 3.잔고 | 4.종료\n");
		printf("===============================\n");
		printf("선택> ");
		scanf_s("%d", &selNo);

		//업무처리
		//예금
		if (selNo == 1) {
			printf("예금액> ");
			scanf_s("%d", &money);
			balance += money;
		}
		else if (selNo == 2) {
			printf("출금액> ");
			scanf_s("%d", &money);
			balance -= money;
		}
		else if (selNo == 3) {
			printf("잔고> %d\n", balance);
		}
		else if (selNo == 4) {
			//sw = 0; //1에서 0으로 바꿔줌
			sw = false;
			//break; //sw변수 있는 경우 생략 가능
		}
		else {
			printf("지원되지 않는 기능입니다.");
		}
		
		if (balance < money ) {
			printf("잔액이 초과되었습니다.");
		}

	}//whileend
	printf("프로그램 종료");

	return 0;
}