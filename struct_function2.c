#include <stdio.h>
#include <string.h>
#define NUM 3
struct student {
	double height;
	double weight;
};
struct student hw_avg(struct student* p)
{
	struct student temp = { 0.0, 0.0 };
	printf("** 3명의 키와 몸무게를 입력하세요 (cm/Kg) **\n");
for (int i = 0; i < NUM; i++) {
	scanf("%lf%lf", &(p + i)->height, &(p + i)->weight);
	temp.height += (p + i)->height;
	temp.weight += (p + i)->weight;
}
	temp.height /= (double)NUM;
	temp.weight /= (double)NUM;
	return temp;
}
int main()
{
	struct student class1[NUM];
	struct student cls1avg = hw_avg(class1);
	printf("Avg Height = %.2fcm, Weight = %.2fKg\n",
	cls1avg.height,
	cls1avg.weight);
return 0;
}  
