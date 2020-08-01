#include <stdio.h>

typedef struct SQUARE {
	int width;
	int height;
} square;

int main()
{


	square sqr;

	printf("사각형의 가로와 세로를 입력해주세요 : ");
	scanf("%d %d", &sqr.width, &sqr.height);


	printf("사각형의 넓이는 %d입니다.\n", sqr.width * sqr.height);

	return 0;
}
