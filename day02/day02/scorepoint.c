#include <stdio.h>

int main() {
	//������ �����ϴ� ���α׷�
	//90���̻� A, 80���̻� B, 70���̻� C, 60�� �̻� D, 60�� �̸� F

	//int score = 77;
	//char ch = 'A';
	int score;
	char ch;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);

	if ( score >= 90) {
		ch = 'A';
	}
	else if ( score >= 80) {
		ch = 'B';
	}
	else if (score >= 70) {
		ch = 'C';
	}
	else if (score >= 60) {
		ch = 'D';
	}
	else {
		ch = 'F';
	}
	printf("%c�����Դϴ�.\n", ch);


	return 0;


}