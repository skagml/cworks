#include <stdio.h>

int findMax(int[], int);
int findMaxInx(int[], int);
int main() {
	//최대값 찾기
	int num[] = { 21, 35, 71, 2, 66, 97, 1000};

	int maxVal = findMax(num, 7);
	int maxIdx = findMaxIdx(num, 7);

	printf("최대값 : %d\n", maxVal); //1000
	printf("최대값의 위치 : %d\n", maxIdx); //3

	return 0;
}

int findMax(int num[], int len) { //배열을 매개변수로 전달
	//최대값 설정(배열의 첫번째 값)
	int max = num[0];
	int i;

	//반복하면서 비교
	for (i = 1; i < len; i++) {
		if (max < num[i]) {
			max = num[i];
		}
	}
	
	//i = 1, 21 < 35, max = 35
	//i = 2, 35 < 71, max = 71
	//i = 3, 71 < 2, max = 71
	//i = 4, 71 < 66, max = 71
	//i = 5, 71 < 97, max = 97

	return max;
}

int findMaxIdx(int num[], int len) { //최대값의 위치 찾기
	int maxIdx = 0;
	int i;

	for (i = 0; i < len;i++) {
		if (num[maxIdx] < num[i]) {
			maxIdx = i;
		}
	}
	return maxIdx;
}