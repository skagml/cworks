#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int i;
	float f;

	printf("정수 입력 : ");
	scanf_s("%d", &i);
	printf("%d\n", i);

	printf("실수 입력 : ");
	scanf_s("%f", &f);
	printf("%f\n", f);

	return 0;
}