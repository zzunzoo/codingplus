#include <stdio.h>
#include <string.h>

struct Grade {
	double avg;
	char grade;

	struct Score {
		int kor;
		int math;
		int eng;
	} score;
};

int main()
{
	struct Grade grd;

	grd.score.kor = 80;
	grd.score.math = 71;
	grd.score.eng = 67;

	grd.avg = (grd.score.kor + grd.score.math + grd.score.eng) / 3.0;

	switch ((int)grd.avg/10)
	{
	case 10:		
	case 9: grd.grade = 'A';
		break;
	case 8: grd.grade = 'B';
		break;
	case 7: grd.grade = 'C';
		break;
	case 6: grd.grade = 'D';
		break;
	}

	printf("국어 : %d 수학 : %d 영어 : %d 평균 : %.2lf 등급 : %c\n",
	grd.score.kor,grd.score.math, grd.score.eng, grd.avg, grd.grade);
	return 0;
}
