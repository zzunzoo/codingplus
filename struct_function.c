#include <stdio.h>
#include <string.h>
struct test Result(struct test);
int Pass(struct test *p);

struct test {
	int kor;
	int math;
	int eng;
	double avg;
	char grade;
};

int main() {
struct test test1 = { 0, 0, 0, 0.0, ' '};
printf("국어, 수학, 영어 점수를 입력하세요 : ");
scanf("%d %d %d", &test1.kor, &test1.math, &test1.eng);
test1 = Result(test1);

printf("국어 : %d 수학 : %d 영어 : %d 평균 : %.2lf 등급 : %c \n",			test1.kor,
	test1.math,
	test1.eng,
	test1.avg,
	test1.grade);
if (Pass(&test1) == 1) {
	printf("시험 결과 : 통과\n");
}
else {
	printf("시험 결과 : 재시험\n");
}
return 0;
}

struct test Result(struct test test1) {

	test1.avg = (test1.kor + test1.math + test1.eng) / 3.0;

switch ((int)test1.avg / 10) {
	case 9: test1.grade = 'A';
	break;
	case 8: test1.grade = 'B';
	break;
	case 7: test1.grade = 'C';
	break;
	case 6: test1.grade = 'D';
	break;
	default: test1.grade = 'F';
	}
	return test1;
}

int Pass(struct test *p) {
	if (p->grade == 'F') {
	p->kor = 0;
	p->math = 0;
	p->eng = 0;
	p->avg = 0.0;
	return 0;
}
else {
return 1;
}
}
