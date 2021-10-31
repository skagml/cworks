//point_circle.h//
//점 구조체
struct Point {
	int x, y;
};

//원 구조체
struct Circle {
	struct Point p1;  //중심점
	int radius; //반지름
};