#include <stdio.h>
#include <stdlib.h>

int main() {
	int num1 = 11;
	int* numPtr1;   //���ÿ���
	int* numPtr2;   //��(heap) ������ ��ġ <��ü������>

	numPtr1 = &num1;
	//numPtr2 = malloc(4);  //4����Ʈ
	numPtr2 = (int*)malloc(sizeof(int));  //4����Ʈ
	if (numPtr2 == NULL) {  //���� ó��(�ʼ�)
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�.\n");
		exit(1);
	}

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);

	free(numPtr2);   //�޸� ����(����)
	return 0;
}