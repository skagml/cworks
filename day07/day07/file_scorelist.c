/*#include <stdio.h>

int main() {

	FILE* fp;
	char name[20];
	int no, kor, eng, math;

	fopen_s(&fp, "scorelist.txt", "w");
	if (fp == NULL) {
		puts("파일을 생성할 수 없습니다.");
		return -1;
	}

	while (1) {
		printf("번호(0이면 종료): ");
		scanf_s("%d", &no);
		if (no <= 0) break;

		printf("이름 입력: ");
		while (getchar() != '\n');
		gets(name);

		printf("국어 영어 수학 점수 입력 : ");
		scanf_s("%d %d %d", &kor, &eng, &math);

		//파일에 쓰기
		fprintf(fp, "%d %s %d %d %d\n", no, name, kor, eng, math);

	}

	fclose(fp);

	return 0;
}*/