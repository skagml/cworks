#include <stdio.h>

void sayHello(); //프로토타입<자료형 함수이름()>
void sayHello2(char[]);

int main() {

	sayHello(); //함수 호출
	sayHello2("C++");
	sayHello2("Python");

	return 0;
}

//void는 반환 자료가 없다.
void sayHello() { //sayHello라는 이름의 함수 정의
	printf("Hello~ C!\n");
}

void sayHello2(char lang[]) {
	printf("Hello~ %s\n", lang);
}