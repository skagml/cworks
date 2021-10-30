#include <stdio.h>

int main() {
	/*	학생 5명의 수학, 영어 점수 저장 */
		
	int x, y;
	int score[5][2] = { 
		{75, 80},
		{85, 95},
		{90, 100},
		{70, 90},
		{85, 57}
	};
	int total[2] = { 0 }; //합계 저장 초기화 때 0을 1개만 표기
	double avg[2] = { 0.0 }; //평균 저장

	//출력
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 2; y++) {
			printf("%3d ", score[x][y] );
		}
		printf("\n");
	}

	//합계 계산
	for (x = 0; x < 5; x++) {
		total[0] += score[x][0]; //수학점수 합계
		total[1] += score[x][1]; //영어점수 합계
	}

	//평균 계산
	avg[0] = (double)total[0] / 5;
	avg[1] = (double)total[1] / 5;

	printf("수학 합계 : %d\n", total[0]);
	printf("영어 합계 : %d\n", total[1]);
	printf("수학 평균 : %3.1lf\n", avg[0]); //3.1lf는 소수점자리 포함해서 3자리, 0.1까지 소수점 나타냄
	printf("영어 평균 : %3.1lf\n", avg[1]);

	return 0;
}