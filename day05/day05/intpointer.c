#include <stdio.h>

int main() {
	//정수형 포인트 선언 및 연산
	int data = 11;

	int* ip = &data; //선언과 동시에 저장

	printf("%x %d\n", &data, data); //data의 주소, 값
	printf("%x %x\n", &ip, ip); //ip의 주소, data의 주소
	printf("%d %d\n", *ip, data); //*ip의 값, data의 값

	printf("==포인터 연산==\n");
	printf("%x %d %d\n", &data, data, *ip + 0);
	printf("%x %d %d\n", &data + 1, data + 1, *ip + 1);
	printf("%x %d %d\n", &data + 2, data + 2, *ip + 2);

	return 0;
}