#include <stdio.h>

int main() {
	//char  name[] = "sunny"; - 1���� �迭(���� 6��)

	char name[4][10] = {
		"sunny",   //s, u, n, n, y '\0'
		"Hyunsoo",
		"soomi",
		"youngsang"
	};

	int i;

	printf("%x %s\n", &name[0], name[0] ); //�ּ�, �� ���
	printf("%x %s\n", name, name );

	//��ü ���
	for (i = 0; i < 4; i++) {
		printf("%s\n", name[i]);
	}

	return 0;
}