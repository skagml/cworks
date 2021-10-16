#include <stdio.h>

int main() {
	//1부터 n까지 출력 - 무한반복문(반복조건문)
	//while ~if ~ break
	//1부터 더했을 때 그 합이 100이 넘는 자연수

	int n = 1; //초기화값 0,1에 따라서 n++의 위치가 바뀜
	int sum = 0;
	while (1) {
		n++;
		sum += n;
		printf("%d\n", n);
		if (sum > 100) //실행문이 한줄이면 {} 생략 가능
			break;
		n++;
	}
	printf("n=%d\n", n); //14
	printf("sum=%d\n", sum); //105

	return 0;
}