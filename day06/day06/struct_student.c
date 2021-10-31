#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <string.h>

//struct 구조체 자료형 정의
struct Student {
	int number;  //번호(멤버 변수 - 초기화 하지 않음)
	char name[20];  //이름
	double weight;  //몸무게
};

int main() {
	struct Student s1;  //객체변수(힙 영역 사용)
	s1.number = 101;
	//s1.name = "강하늘";
	strcpy(s1.name, "강하늘");
	s1.weight = 62.3;

	//s2 생성하기
	struct Student s2;
	s2.number = 102;
	strcpy(s2.name, "김남희");
	s2.weight = 50.0;

	printf("학번 : %d\n", s1.number);
	printf("이름 : %s\n", s1.name);
	printf("몸무게 : %3.1f\n", s1.weight);

	printf("학번 : %d\n", s2.number);
	printf("이름 : %s\n", s2.name);
	printf("몸무게 : %3.1f\n", s2.weight);

	return 0;
}
