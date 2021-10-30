#include <stdio.h>

int main() {
	char ch = 'J';
	int iNum = 11;

	char* cp; //문자형 포인터 cp 선언
	int* ip; //정수형 포인터 ip 선언
	
	cp = &ch; //포인터에 ch의 주소 저장
	ip = &iNum; //포인터에 iNum의 주소 저장

	printf("%x %c\n", cp, *cp); //cp의 값, *cp의 값 출력
	printf("%d %d\n", sizeof(ch), sizeof(cp)); //1byte, 4byte
	//포인터 자료형의 크기는 모두 4byte임.

	printf("%x %d\n", ip, *ip); //ip의 저장 값, *ip의 값 출력
	printf("%d %d\n", sizeof(iNum), sizeof(ip)); //1byte, 4byte

	return 0;
}