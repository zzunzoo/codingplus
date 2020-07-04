#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Plan {
	int h;
	int m;
	char text[100];;
};

int main() {
	
	int i;
	int num;
	printf("오늘의 계획을 몇 개입니까? ");
	scanf("%d", &num);
	struct Plan *p = malloc(num * sizeof(struct Plan));

	printf("계획을 시간:분, 계획의 내용 차례로 입력해주세요.\n\n");
	for (i = 0; i < num; i++) {
		printf("%d번째 계획 : ", i + 1);
		scanf("%d:%d%s", &p[i].h, &p[i].m, p[i].text);
	}

	for (i = 0; i < num; i++) {
		printf("%d. %02d:%02d %s\n", i + 1, (p + i)->h, (p + i)->m, (p + i)->text);
	}
	free(p);
}
	
