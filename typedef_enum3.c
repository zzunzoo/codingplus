#include <stdio.h>

enum WEEK {
	SUN,
	MON,
	TUE,
	WED,
	THU,
	FRI,
	SAT
};

int main()
{
	enum WEEK week;

	week = SUN;

	for (int i = 0; i < 7; i++)
		printf("%d\n", week+i);

	return 0;
}
