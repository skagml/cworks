#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	
	int x, n1, n2;

	//������ ��� - x(�Է°�) -> x*x

	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &x);
	printf("%d\n", x * x);
	printf("x�� �ּҰ� : 0x%x\n", &x);

	//�� ���� �� ���ϱ�
	printf("�� ���� �Է����ּ��� : ");
	scanf_s("%d %d", &n1, &n2); //�Է��� �� ��ĭ ���� �Է�
	printf("%d\n", n1 - n2);
	printf("x�� �ּҰ� : 0x%x\n", &n1);
	printf("x�� �ּҰ� : 0x%x\n", &n2);

	return 0;
}