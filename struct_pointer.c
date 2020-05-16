#include <stdio.h>
#include <string.h>
struct student{
char name[20];
int weight;
double height;
};

int main() {
	struct student s = { "코딩봇", 98, 110.7 };
	struct student *p;
	int i;	
p = &s;

printf("[s.-]    이름 : %s 몸무게 : %dkg 키 : %.2lfcm\n", s.name, s.weight, s.height);
printf("[(*p.-]  이름 : %s 몸무게 : %dkg 키 : %.2lfcm\n", (*p).name, (*p).weight, (*p).height);
printf("[p->-]   이름 : %s 몸무게 : %dkg 키 : %.2lfcm\n", p->name, p->weight, p->height);

struct student List[2];
struct student *pL1, *pL2 = List;

for (i = 0; i < 2; i++) {
pL1 = &List[i];
printf("이름, 몸무게, 키를 입력해주세요 : ");
scanf("%s %d %lf", pL1->name, &pL1-> weight, &pL1->height);
}


printf("\n");

for ( i = 0; i < 2; i++) {
printf("List[%d] : 이름 %s 몸무게 : %dkg 키 : %.2lf\n", i, (pL2+i)->name, (pL2+i)->weight, (pL2+i)->height);
} 
return 0;
}
