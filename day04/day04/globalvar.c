#include <stdio.h>

void price();
int quantity = 2;  //전역변수

int main() {

	printf("%d개에\n", quantity);
	price();

	return 0;
}

void price() {
	int price = 10000 * quantity;
	printf("%d원입니다.\n", price);
}