#include <stdio.h>

int main() {

	//1부터 n까지 더하기
	int n = 0; //반복 횟수
	int sum = 0; //합계를 저장할 변수
	while (n <= 100) {
		sum += n; //sum = sum + n
		printf("n = %d, sum = %d\n", n, sum);
		n++;      //n = n + 1
	}

	printf("sum = %d\n", sum);
	/*n += 1(n); //1(sum)
	n += 2; //3
	n += 3; //6
	n += 4; //10*/

	return 0;
}