#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <string.h>

//struct ����ü �ڷ��� ����
struct Student {
	int number;  //��ȣ(��� ���� - �ʱ�ȭ ���� ����)
	char name[20];  //�̸�
	double weight;  //������
};

int main() {
	//�迭 ��ü����(�� ���� ���)
	struct Student s[3] = {
		{101, "���ϴ�", 50.2},
		{102, "������", 61.2},
		{103, "������", 46.9}
	};
	int i;

	for (i = 0; i < 3; i++) {
		printf("�й� : %d\n", s[i].number);
		printf("�̸� : %s\n", s[i].name);
		printf("������ : %3.1f\n", s[i].weight);
	}

	
	return 0;
}
