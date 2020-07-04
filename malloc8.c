#include <stdio.h>
#include <stdlib.h>
char credit(int score)
{
	if(score > 89) return 'A';
	else if (score > 79) return 'B';
	else if (score > 69) return 'C';
	else if (score > 59) return 'D';
	else  return 'F';
}
int main()
{
	int i;
	int **iary;
	char subj[2][20] = { "수학", "컴퓨터" };
	iary = (int**)calloc(2, sizeof(int*));
	for (i = 0; i < 2; i ++) {
	iary[i] = (int*)calloc(2,sizeof(int));
	printf("%s 점수 입력(만점 : 50) (중간, 기말) : ", subj[i]);
	scanf("%d%d", &iary[i][0], &iary[i][1]);
	printf("%s의 학점은 %c.\n", subj[i], credit(iary[i][0] + iary[i][1]));
	}
	for (i = 0; i < 2; i++) {
	free(iary[i]);
	}
	free(iary);
	return 0;
} 
	
