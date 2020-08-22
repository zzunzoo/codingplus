#include <stdio.h>
#define PRINT_BIRTH(m, d) printf("내 생일은 %02d월 %02d일입니다. \n", m, d)

int main()
{
	int m;
	int d;

	printf("생일을 월, 날짜 순으로 입력하세요 : ");
	scanf("%d %d", &m, &d);

	PRINT_BIRTH(m, d);

	return 0;
}
