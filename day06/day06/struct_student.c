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
	struct Student s1;  //��ü����(�� ���� ���)
	s1.number = 101;
	//s1.name = "���ϴ�";
	strcpy(s1.name, "���ϴ�");
	s1.weight = 62.3;

	//s2 �����ϱ�
	struct Student s2;
	s2.number = 102;
	strcpy(s2.name, "�賲��");
	s2.weight = 50.0;

	printf("�й� : %d\n", s1.number);
	printf("�̸� : %s\n", s1.name);
	printf("������ : %3.1f\n", s1.weight);

	printf("�й� : %d\n", s2.number);
	printf("�̸� : %s\n", s2.name);
	printf("������ : %3.1f\n", s2.weight);

	return 0;
}
