#include <stdio.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//������� ���α׷�
	//int sw = 1; //����ġ���� - ����, �ߴ��� ����
	bool sw = true;
	int balance = 0; //�ܰ�
	while (sw) {
		int selNo; //���� ����
		int money; //����� ����
		printf("===============================\n");
		printf("1.����| 2.��� | 3.�ܰ� | 4.����\n");
		printf("===============================\n");
		printf("����> ");
		scanf_s("%d", &selNo);

		//����ó��
		//����
		if (selNo == 1) {
			printf("���ݾ�> ");
			scanf_s("%d", &money);
			balance += money;
		}
		else if (selNo == 2) {
			printf("��ݾ�> ");
			scanf_s("%d", &money);
			balance -= money;
		}
		else if (selNo == 3) {
			printf("�ܰ�> %d\n", balance);
		}
		else if (selNo == 4) {
			//sw = 0; //1���� 0���� �ٲ���
			sw = false;
			//break; //sw���� �ִ� ��� ���� ����
		}
		else {
			printf("�������� �ʴ� ����Դϴ�.");
		}
		
		if (balance < money ) {
			printf("�ܾ��� �ʰ��Ǿ����ϴ�.");
		}

	}//whileend
	printf("���α׷� ����");

	return 0;
}