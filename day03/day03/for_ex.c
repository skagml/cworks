#include <stdio.h>

int main() {
	//반복문 - for문
	int n;
	int total = 0; //합계
	for (n = 1; n <= 10; n++) { //초기값; 조건값; 중감값;
		total += n;
		//printf("%3d", n);
	}
	printf("합계 : %d", total);
	return 0;
}