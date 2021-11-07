/*#include <stdio.h>

int main() {

	FILE* fout;
	int i, j;

	fopen_s(&fout, "gugudan.txt", "w"); //추가 쓰기 - "a" 모드 사용
	if (fout == NULL) {
		puts("파일을 생성할 수 없습니다.");
		return -1;  //exit(-1) 사용 안함
	}

	//구구단 쓰기
	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			fprintf(fout, "%d X &d = %d\n", i, j, (i * j));
		}
		fprintf(fout, "\n"); //문자열로 표기 - '\n'사용안함 주의!!
	}

	fclose(fout); //파일 종료

	return 0;
}*/