/*#include <stdio.h>

int main() {

	FILE* fp;
	char name[20];
	int kor, eng, math;

	printf("�̸� �Է� : ");
	fscanf_s(stdin, "%s", name, sizeof(name));  
	//stdin�� ������(�ּ�)�� ���۸� ����Ű�� �ü���� ����
	//Ű����� �Է�

	printf("���� ���� �Է� : ");
	fscanf_s(stdin, "%d", &kor);

	printf("���� ���� �Է� : ");
	fscanf_s(stdin, "%d", &eng);

	printf("���� ���� �Է� : ");
	fscanf_s(stdin, "%d", &math);

	fopen_s(&fp, "score.txt", "w");
	if (fp == NULL) {
		puts("������ ������ �� �����ϴ�.");
		return -1;
	}

	fprintf(fp, "%s %d %d %d\n", name, kor, eng, math);  //���Ͽ� ����
	fprintf(stdout, "%s %d %d %d\n", name, kor, eng, math);  //����Ϳ� ����

	fclose(fp);

	return 0;
}*/