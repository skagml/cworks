#include <stdio.h>
#include "point_circle.h"

int main() {
	//원 생성
	struct Circle c1;
	c1.p1.x = 5;
	c1.p1.y = 6;
	c1.radius = 4;

	printf("중심점(%d, %d), 반지름(%d, %d)", c1.p1.x, c1.p1.y, c1.radius);

	return 0;
}
