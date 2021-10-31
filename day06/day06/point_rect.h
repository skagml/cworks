//point_rect.h//
//점 구조체
struct Point {
	int x, y;
};

//사각형 구조체
struct Rectangle {
	struct Point p1;  //Point 구조체 참조
	struct Point p2;
};