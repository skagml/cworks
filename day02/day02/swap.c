#include <stdio.h>

int main() {
	//변수값 교환하기
	int blue = 1;
	int red = 2;
	int yellow;
	
	printf("====== 교환전 ======\n");
	printf("blue=%d, red = %d\n", blue, red);

	//교환 처리
	yellow = blue;
	blue = red;
	red = yellow;

	printf("====== 교환후 ======\n");
	printf("blue=%d, red = %d\n", blue, red);

	return 0;
}