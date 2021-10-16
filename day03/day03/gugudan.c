#include <stdio.h>

int main() {
	//구구단 한개 단만 출력하기 - 단을 입력받기
	int dan;
	int i,j;
	/*printf("숫자를 입력하세요 : ");
	scanf_s("%d", &dan);

	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", dan, i, (dan * i));
	}*/

	//전체 구구단
	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}

	return 0;
}