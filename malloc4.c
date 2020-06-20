#include <stdio.h>
#include <stdlib.h>

int main()
{

	int *ip;
	int i;
	int a;
	int b;
	int c = 0;

	printf("배열의 크기를 입력하세요 : ");
        scanf("%d", &a);

	ip = (int *)malloc(a * sizeof(int));

	printf("배열 원소의 값 입력 : ");

	for (i = 0;i < a; i++) {
		ip[i] = i + 1;
		printf(" %d", ip[i]);
	}
	printf("\n");
	for (i = 0;i < a;i++) {
		ip[i] = i + 1;
		b = ip[i];
		c += b;
	}
	printf("합계 : %d", c);

	
return 0;
}	
