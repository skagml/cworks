#include <stdio.h>

int main() {
	int family[3];

	family[0] = 101;
	family[1] = 102;
	family[2] = 103;

	printf("시은이네 호텔 방 번호는 %d호입니다.\n", family[0]);
	printf("지훈이네 호텔 방 번호는 %d호입니다.\n", family[1]);
	printf("할아버지 할머니 호텔 방 번호는 %d호입니다.\n", family[2]);

	//family의 메모리 주소
	printf("%x\n", &family[0]);
	printf("%x\n", family);


	return 0;
}