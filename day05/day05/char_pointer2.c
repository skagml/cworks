#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main() {
	char a[10];
	char* b;

	printf("문자를 입력하세요 : ");
	scanf("%s", a);
	//a[] = "apple"

	b = a;
	printf("저장된 문자열 : %s\n", b);

	return 0;
}