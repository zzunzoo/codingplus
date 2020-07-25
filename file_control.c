#include <stdio.h>
#include <string.h>

int main() {
	FILE *fp = fopen("LT.txt", "r");
	char str[100];
	int i;
	int acc = 0;
	int lines = 0;
	int Lbegin[20] = { 0 };
	while (!feof(fp)) { 
		if (fgets(str, sizeof(str), fp) != NULL) {
			if (lines > 0) {
				Lbegin[lines] = acc;
			}
			acc += strlen(str) + 1;
			printf("%s", str);
			lines++;
		} 
	
	for (i = 0; i < lines; i++) {
		printf("%d\n", Lbegin[i]);
	}
	printf("현재 파일 인디케이터  값 = %ld\n", ftell(fp));
	printf("출력하고 싶은 줄 입력 ? ");
	scanf("%d", &i);
	fseek(fp, Lbegin[i - 1], SEEK_SET);
	printf("%s", fgets(str, sizeof(str), fp));
	fclose(fp);
	return 0;
}
