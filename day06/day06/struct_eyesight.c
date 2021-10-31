#include <stdio.h>
#include "eyesight.h"

struct Eyesight swap(struct Eyesight sight);


int main() {
	struct Eyesight eye = { 1.5, 1.2 };

	//시력교환
	eye = swap(eye);  //객체를 매개변수로 변달(호출)

	printf("왼쪽눈 시력 : %3.1lf\n", eye.left);
	printf("오른쪽눈 시력 : %3.1lf\n", eye.right);

	return 0;
}

struct Eyesight swap(struct Eyesight sight) {
	double temp;
	temp = sight.left;
	sight.left = sight.right;
	sight.right = temp;

	return sight;
};