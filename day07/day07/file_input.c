/*#include <stdio.h>

int main() {

	FILE* fp;
	fopen_s(&fp, "hello.txt", "r");   //읽기 모드 - "r", "rt" 사용
	if (fp == NULL) {  //예외처리 필수
		puts("파일을 열 수 없습니다.");  //puts(문자열)_
		return -1;
	}
	int ch = 0;

	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}
	while (1) {
		int ch = fgetc(fp);  //한 문자 가져오기
		if (ch == EOF) break; //EOF = -1
		//putchar(ch);         //한 문자 출력하기
		printf("%c", ch);
	}

	fclose(fp);

	return 0;
}*/