#include <stdio.h>

int callByVal(int);
int callByRef(int*);
int main() {
	int n = 10;
	int result = 0;

	printf("==callByVal 호출==\n");
	result = callByVal(n);
	printf("%d\n", result); //11
	printf("%d\n\n", n); //10

	printf("==callByRef 호출==\n");
	result = callByRef(&n);
	printf("%d\n", result); //11
	printf("%d\n", n); //10

	return 0;
}

int callByVal(int i) {
	i = i + 1;
	return i;
}

int callByRef(int* i) {
	*i = *i + 1;
	return *i;
}