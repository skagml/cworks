#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include "person.h"
#include <stdlib.h>
#include <string.h>

int main() {
	//객체 동적으로 생성
	Person* p1 = (Person*)malloc(sizeof(Person));
	if (p1 == NULL) {
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	//자료 저장
	strcpy(p1->name, "더조은");
	p1->age = 31;
	strcpy(p1->address, "서울시 노원구 상계동");

	//자료 출력
	printf("이름 : %s\n", p1->name);
	printf("나이 : %d\n", p1->age);
	printf("주소 : %s\n", p1->address);

	free(p1);

	return 0;
}
