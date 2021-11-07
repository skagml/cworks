/*#include <stdio.h>
#define VER 10  //치환값이 있는 매크로명 정의
#define BIT16  //치환값이 없는 매크로 정의

int main() {

	int max = 0;

#if VER >= 10
	printf("버전은 %d입니다.", VER);
#endif 
	printf("\n================================\n");

#ifdef BIT16
	max = 32767;   //매크로명 BIT16이 정의되어 있으면
#else
	max = 2147483647;    //매크로명 BIT16이 정의되어 있지 않으면
#endif
	printf("int형 변수의 최대값 : %d\n", max);

	return 0;
}*/