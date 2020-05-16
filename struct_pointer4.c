#include <stdio.h>
#include <string.h>
struct student{
	char name[20];
	char fea[10];
	int age;

};

int main() {
	struct student List[3], *lP = List;
	int i;
	printf("친구의 이름, 나이, 특징을 입력하세요 : \n");
	for(i = 0; i < 3; i++) {
		scanf("%s %d %s", (lP + i)->name, &(lP + i)->age, (lP + i)->fea);
	}
	printf("\n");
	for(i = 0; i < 3; i++) {
		printf("%s %d %s\n", (lP + i)->name, (lP + i)->age, (lP + i)->fea);
	}	
	return 0;
}
