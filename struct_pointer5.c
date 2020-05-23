#include <stdio.h>
#include <string.h>
struct student{
	char name[20];
	int kor;
	int com;
	int eng;

};

int main() {
	struct student List[3], *lP = List;
	int i;
	printf("이름, 국어, 컴퓨터, 영어 점수를 입력하세요 : \n");
	for(i = 0; i < 3; i++) {
		scanf("%s %d %d %d", (lP + i)->name, 
			&(lP + i)->kor, &(lP + i)->com, &(lP + i)->eng);
	}
	printf("\n\n 이름   국어  컴퓨터  영어  평균\n");
	for(i = 0; i < 3; i++) {
		printf("%s %d %d %d %d\n", 
			(lP + i)->name, 
			(lP + i)->kor, 
			(lP + i)->com, 
			(lP + i)->eng, 
			(((lP + i)->kor + (lP + i)->com + (lP + i)->eng)/3));
		}	
	return 0;
}
