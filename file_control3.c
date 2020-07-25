#include <stdio.h>

int main() {

	FILE *fp = fopen("LT.txt", "r");
	char str[100];
	int i;
	int j;

	fseek(fp, 0, SEEK_SET);

	for(i = 0; i < 3; i++); {
		printf("현재 포인터 위치 : %d\n", ftell(fp));
		printf("이동하고 싶은 크기를 입력하세요 : ");
		scanf("%d", &j);
		printf("\n");
		printf("현재 포인터 위치 : %d\n", j);
		fseek(fp, j, SEEK_SET); 
		printf("%s", fgets(str, sizeof(str), fp));
	}

	fclose(fp);

	return 0;
}
