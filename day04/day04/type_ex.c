#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main() {

	//time_t t = time(NULL); //time_t 시간 자료형
	long t, start, end;

	t = time(NULL); //1970. 1.1 자정이후 현재까지 시간
	int i;

	printf("%ld초\n", t); //%d, %ld(long decimal) 1634441633초

	//1부터 10까지 출력(대기 시간을 도입) - 수행 시간 측정
	//Sleep(1000) -> 1초  <Windows.h> include
	start = time(NULL);  //시작시간

	for (i = 1; i <= 100; i++) {
		printf("%d\n", i);
		Sleep(20); //0.02초
	}

	end = time(NULL);

	//double diff_timer = difftime(end, start);
	double diff_timer = (double)(end - start); //형변환
	printf("수행시간 : %lf초\n", diff_timer);

	return 0;
}