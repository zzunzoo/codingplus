#include <stdio.h>
#include <string.h>
struct information {
	char gender;
	char new;
};

struct Join {
struct information info;
char name[10];
int age;
};

int main() {
	struct Join join[4];
	int i;
	int k;
	for (i = 0; i < 4; i++) {
	printf("신규 회원이십니까? (Y/N)");
	scanf("%c", &join[i].info.new);
	printf("이름, 나이, 성별(남:M/여:F)을 차례로 입력해주세요 : ");
	scanf("%s %d %c%*c", join[i].name, &join[i].age, &join[i].info.gender);
	printf("\n");	
	                                             
}
	printf("1. 신규 회원 보기\n2. 기존 회원 보기\n3. 남자 회원보기\n4. 여자 회원 보기\n");
	scanf("%d", &k);
	if (k == 1) {
		for(i = 0; i < 4; i++) {
			if (join[i].info.new == 'Y')
				printf("%5s%3d%2c\n", join[i].name, join[i].age, join[i]. info.gender);
}
}
	else if (k == 2) {
		for (i = 0; i < 4; i++)
			if(join[i].info.new == 'N')
				printf("%5s%3d%2c\n", join[i].name, join[i].age, join[i]. info.gender);
}
	else if (k == 3) {
		for (i = 0; i < 4; i++)
			if(join[i].info.new == 'M')
				printf("%5s%3d%2c\n", join[i].name, join[i].age, join[i]. info.gender);
}
	else if (k == 4) {
	 	for (i = 0; i < 4; i++)
			if(join[i].info.new == 'F')
				printf("%5s%3d%2c\n", join[i].name, join[i].age, join[i]. info.gender);
}
return 0;
}

