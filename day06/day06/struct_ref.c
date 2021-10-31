#include <stdio.h>
#include "point_rect.h"

int main() {
	//사각형 객체 생성
	struct Rectangle rect;

	rect.p1.x = 1;
	rect.p1.y = 2;
	rect.p2.x = 3;
	rect.p2.y = 4;

	printf("p1(%d, %d), p2(%d, %d)", rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);

	return 0;
}
