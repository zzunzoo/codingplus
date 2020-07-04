#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
	char name[10];
	int age;
	char gender;
};	

int main() {

	struct Person *p = malloc(sizeof(struct Person));

	//화살표 연산자로 구조체 멤버에 접근하여 값 대입
	strcpy(p->name, "코딩봇");
	p->age = 9;
	p->gender = 'M'; //남자

	//화살표 연산자로 구조체  멤버에 접근하여 값 출력
	printf("이름 : %s\n", p->name);
	printf("나이 : %d\n", p->age);
	printf("성별 : %c\n", p->gender);

	free(p); //동적 메모리 해제

	return 0;
}	

	
