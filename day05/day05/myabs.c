#include <stdio.h>

int myAbs(int);

int main() {

	int value1 = myAbs(-4);
	int value2 = myAbs(4);

	printf("%d\n",value1 );
	printf("%d\n",value2 );

	return 0;
}

int myAbs(int x) { //음수는 양수로, 양수는 양수로 리턴
	if ( x < 0) {
		return -x;
	}
	else { //x >= 0
	return x;
	}
}