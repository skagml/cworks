#include <stdio.h>

void myPrint(int*);
int main() {
	int num[] = { 1, 2, 3, 4 };
	myPrint(num);

	return 0;
}

void myPrint(int* n) {  //n = num
	int i;
	for (i = 0; i < 4; i++) {
		printf("%2d",*(n + i));
	}
}