#include <stdio.h>

int main() {
	int arr[] = { 10, 20, 30, 40 }; //배열 선언과 동시에 값 저장(초기화)
	int i;
	int sum = 0;

	//30을 출력
	printf("a[2] = %d\n", arr[2]);

	//전체 출력
	for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]);
	}

	//합계
	for (i = 0; i < 4; i++) {
		sum += arr[i]; //값을 더하기
	}
	printf("\n합계 : %d", sum);

	return 0;
}