#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int **iary;
	iary = (int **)malloc(2 * sizeof(int *));

	for (i = 0; i < 2; i++) {
		iary[i] = (int*)malloc(3 * sizeof(int));
		printf("두 정수 입력 : ");
		scanf("%d %d", &iary[i][0], &iary[i][1]);
		iary[i][2] = iary[i][0] * iary[i][1];
		printf("%d * %d = %d\n", iary[i][0], iary[i][1], iary[i][2]);
	}

	for (i = 0; i < 2; i++) {
		free(iary[i]);
	}

	free(iary);

	return 0;
}    
