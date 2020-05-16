#include <stdio.h>
#include <string.h>

struct student
{
char name[20];
int score;
};

int main() {
struct student List[5];

int i;
int max = 0;
char maxname[20];

for(i = 1; i < 6; i++) {
printf("%d. 이름, 점수를 입력하세요 : ", i);
scanf("%s %d", List[i].name, &List[i].score);
printf("\n");
}

for(i = 0; i < 5; i++) {
if(max < List[i].score) {
strcpy(maxname, List[i].name);
max = List[i].score;
}
}

printf("최고 점수 : %s %d", maxname, max);

return 0;
} 
