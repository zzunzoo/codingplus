#include <stdio.h>

int main() 
{
	FILE *fw;
	FILE *fr;
	char blood;
	char name[20];
	char str[100];
	double height;
	double weight;
	double dh;	
	double dw;
	fw = fopen("anna.txt", "w");
	printf("이름/키/몸무게/혈액형 입력 : ");
	scanf("%s%lf%lf %c", name, &height, &weight, &blood);
	fprintf(fw, "내 이름은 %s 입니다. \n", name);
	fprintf(fw, "제 키는 %.1fcm, 몸무게는 %.1fkg, 혈액형은\
	",  
	height,weight);
	putc(blood, fw);
	fputs("형 입니다.\n", fw);
	fclose(fw);
	fr = fopen("anna.txt", "r");
	while (fgets(str, sizeof(str), fr) != NULL) {
		printf("%s", str);
	}
	rewind(fr);
	fscanf(fr, "%*s%*s%s%*s", str);
	printf("이름 : %s\n", str);
	fscanf(fr," %*s%*s%lfcm, &*s&lfkg, %*s%*s%*s", &dh, &dw);
	printf("키 : %.1fcm, 몸무게 : %.1fkg\n", dh, dw);
	fclose(fr);
	return 0;
}

	
