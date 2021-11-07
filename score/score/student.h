//students.h

typedef struct _Score {
	int math;
	int eng;
	double avg;
}Score; //구조체 실명

typedef struct _Students {
	int number;
	char name[20];
	Score score;    //Score 자료형을 참조
}Students;
