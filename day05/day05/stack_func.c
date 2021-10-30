#define MAX 10
#include <stdio.h>

int top = -1; //stack에 값이 없음
int stack[MAX]; //정수형 배열 크기를 19\0으로 지정
void push(int n) { //넣기
	top++; //현재 top = 0으로 증가
	stack[top] = n;
	printf("%d\n", stack[top]);
}

int pop() { //꺼내기
	if (top < 0) {
		printf("스택이 비었습니다.\n");
		return 0;
	}
	else{
		return stack[top--];
	}
}

int main() {
	printf("==스택에 자료 넣기==\n");
	push(10);
	push(20);
	push(30);

	printf("==스택에 자료 빼기==\n");
	printf("%d\n", pop()); //30
	printf("%d\n", pop()); //20
	printf("%d\n", pop()); //10
	printf("%d\n", pop()); //0 ,에러가 날 수 있어서 조건을 달아줘야함

	return 0;
}
