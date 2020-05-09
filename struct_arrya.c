#include <stdio.h>

struct student
{
char group;
char name[10];
double cScore;
int grade;
}List[3];
int main() {
struct student List[3];
int i;

for (i = 0; i < 3; i++) {
printf("소속을 입력을하세요 : ");
scanf("%c", &List[i].group);
printf("이름을 입력하세요 : ");
scanf("%s", List[i].name);
printf("C언어 점수를 입력하세요 : ");
scanf("%lf", &List[i].cScore);
if (List[i].cScore == 100) {
List[i].grade = 1;
}
else {
List[i].grade = 10-((int)List[i].cScore/10);
}
scanf("%*c");
}

printf("\n");

for(i = 0; i < 3; i++) {
printf("소속 이름 : %c, 이름 : %s, C언어 점수 : %.2f, 등급 : %d\n\n", List[i].group, List[i].name, List[i].cScore, List[i].grade);
}
return 0;
}
