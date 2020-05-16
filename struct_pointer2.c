#include <stdio.h>
#include <string.h>
struct student{
	char name[20];
	char school[20];
	int grade;
};

int main() {
	struct student List[2] = { {"홍길동", "코딩중학교", 1}, {"고길동", "플러스중학교", 3} };
	struct student *lp = List;


	for(int i = 0; i < 2; i++) {
		printf("%5s%11s%2d\n", (lp + i)->name, (lp + i)->school, (lp + i)->grade);
	}

	return 0;
}
