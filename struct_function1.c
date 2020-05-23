#include <stdio.h>
#include <string.h>
	struct standard {
	double height;
	double weight;
	double stand;
};
double BMI(struct standard *s);

int main()
{
struct standard s = {0.0};
	printf("키와 몸무게를 입력하세요 : ");
	scanf("%lf %lf", &s.height, &s.weight);
	BMI(&s);
	printf("당신의 BMI는 %.2f입니다.\n", s.stand);
return 0;
}

double BMI(struct standard *s) {
	s->stand = s->weight / ((s->height*0.01)* (s->height*0.01));
return s->stand;
}
