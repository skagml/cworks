/*#include <stdio.h>

int main() {

	FILE* fp;
	char name[20];
	int kor, eng, math;

	fopen_s(&fp, "score.txt", "rt");
	if (fp == NULL) {
		puts("파일을 열 수 없습니다.");
		return -1;
	}
	//파일 읽기
	//fscanf_s(fp, "%s", name ,sizeof(name));
	fscanf_s(fp, "%s %d %d %d", name, sizeof(name), &kor, &eng, &math);

	//fprintf(stdout, "%s", name);
	fprintf(stdout, "%s %d %d %d\n",name, kor, eng, math);  //모니터에 쓰기

	fclose(fp);

	return 0;
}*/