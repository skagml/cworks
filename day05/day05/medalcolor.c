#include <stdio.h>

int main() {

	int ranking = 2;

	char *medalColor;

	switch (ranking) {
	case 1:
		medalColor = "Gold";
		break;
	case 2:
		medalColor = "Silver";
		break;
	case 3:
		medalColor = "Bronze";
		break;
	default:
		medalColor = "None";
		break;
	}
	printf("%d등 메달의 색상은 %s입니다.",ranking, medalColor);

	return 0;
}