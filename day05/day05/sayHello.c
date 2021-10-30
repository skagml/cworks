#include <stdio.h>

void sayHello(char name[]) {
	printf("Hello~ %s\n", name);
	}

void sayHello2(char* name){
	printf("Hello~ %s\n", name);
	}

int main() {
	sayHello("sunny"); //배열 호출
	sayHello2("Hyunsoo"); //포인터 호출

	return 0;
}