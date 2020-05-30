#include <stdio.h>
#include <string.h>

struct Phone {
	int areacode;
	int tel;
};

struct Student {
	char name[10];
	int grade;
	struct Phone ph;
};

int main() {
struct Student s1, s2;

	s1.ph.areacode = 2;
	s1.ph.tel = 1112222;
	strcpy(s1.name, "코딩봇");
	s1.grade = 5;

	printf("%6s%2d학년 전화번호 : %02d) %d\n",				        s1.name,									s1.grade,									s1.ph.areacode,
	s1.ph.tel);

	s2.ph.areacode = 32;
	s2.ph.tel = 2223333;
	strcpy(s2.name, "코봇");
	s2.grade = 3;

	printf("%6s%2d학년 전화번호 : %03d) %d\n",					s2.name,									s2.grade,									s2.ph.areacode,									s2.ph.tel);
	return 0;
}

