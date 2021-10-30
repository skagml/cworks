#include <stdio.h>

int main() {
	//char  name[] = "sunny"; - 1차원 배열(개수 6개)

	char name[4][10] = {
		"sunny",   //s, u, n, n, y '\0'
		"Hyunsoo",
		"soomi",
		"youngsang"
	};

	int i;

	printf("%x %s\n", &name[0], name[0] ); //주소, 값 출력
	printf("%x %s\n", name, name );

	//전체 출력
	for (i = 0; i < 4; i++) {
		printf("%s\n", name[i]);
	}

	return 0;
}