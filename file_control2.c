#include <stdio.h>

int main() {
	FILE *fp = fopen("LT.txt", "r");
	char str[100];
	int i;

	fseek(fp, 0, SEEK_SET);
	
	for (i = 0; i < 3; i++) {
		printf("현재 포인터 위치 : %d\n", ftell(fp));
		printf("%s", fgets(str, sizeof(str), fp));
	}

	fclose(fp);

	return 0;
}
