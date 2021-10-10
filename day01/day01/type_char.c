#include <stdio.h>

int main() {
	//문자 자료형
	char ch = 'a'; //문자형 변수 ch에 'a'를 저장
	printf("%c\n", ch);
	printf("%d\n", ch); //아스키코드값, 97

	//자료형의 크기
	printf("char 형= %dByte\n", sizeof(char)); //1byte

	ch = 98;
	printf("%c\n", ch); //b
	printf("%c\n", ch+1); //c
	printf("%d\n", ch);  //98

	//영문 문자열과 한글은 배열로 표현
	char f[7] = "banana"; //문자열은 쌍따옴표로 감싼다. 7인이유는 맨뒤의 역슬래시0이 생략되어있음('\0',null)
	char h[3] = "가";
	char h2[] = "\uD55C"; //유니코드
	char h3[] = "\uAE00"; //유니코드

	printf("%s\n", f);
	printf("%s\n", h);
	printf("%s", h2); //한
	printf("%s\n", h3); //글


	return 0;
}