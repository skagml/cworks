#include <stdio.h>

void count() {
	int x = 0; //�������� - ���, �Լ� { }�� ��� - ���� ����� �Ҹ�
	static int y = 0; //����(����)����(static Ű���� ���) - ���� ����, ���� (���α׷��� ����Ǹ� �Ҹ�)
	x += 1;
	y += 1;
	printf("x = %d, y = %d\n", x, y);
}

int main() {

	count();
	count();
	count();

	return 0;
}