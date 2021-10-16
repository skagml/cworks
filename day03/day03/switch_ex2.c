#include <stdio.h>

int main() {
	//순위에 따라 메달 색깔을 지정하는 조건문
	int ranking = 2;
	char medalColor;

	switch (ranking) {
	case 1:
		medalColor = 'G';
		break;
	case 2:
		medalColor = 'S';
		break;
	case 3:
		medalColor = 'B';
		break;
	default:
		medalColor = 'N';
		break;
	}//switch End
	printf("%d등 메달의 색깔은 %c", ranking, medalColor);

	return 0;
}