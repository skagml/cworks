#include <stdio.h>
#include "student.h"

int main() {
	//학생 1명 생성
	Students s1 = { 101, "서우주", {85, 90, 0.0} };

	//평균 계산
	s1.score.avg = ((double)s1.score.math + (double)s1.score.eng) / 2;

	//출력
	printf("번호 : %d\n", s1.number);
	printf("이름 : %s\n", s1.name);
	printf("평균 : %3.1lf\n", s1.score.avg);

	system("pause");
	return 0;
}
