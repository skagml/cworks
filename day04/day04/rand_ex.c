#include <stdio.h>
#include <stdlib.h> //���嶧����
#include <time.h>  //time �Լ� ������

int main() {
	int dice, i;

	//rand()�Լ� - <stdlib.h> include
	//srand(seed) �Բ� ��� - seed ����
	srand(time(NULL));  //�ð��� �帣�Ƿ� seed ���� �����
	printf("%d\n", rand());


	//�ֻ��� ����� - 10�� ������
	for (i = 0; i < 10; i++) {
		dice = rand() % 6 + 1; //1 ~ 6�� ����
		printf("�ֻ��� �� : %d\n", dice);
	}
	
	return 0;
}