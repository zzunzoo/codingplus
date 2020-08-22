#include <stdio.h>
#define DIV1(a, b) (a / b)
#define DIV2(a, b) ((a) / (b))
#define MUL1(a, b) (a * b)
#define MUL2(a, b) ((a) * (b))


int main()
{
	int a = 7;
	int b = 3;

	printf("DIV1(%d, %d) -> %d\n", a, b, DIV1(a, b));
	printf("DIV1(%d + 1, %d + 2) -> %d\n\n", a, b, DIV1(a + 1, b + 2));

	printf("DIV2(%d, %d) -> %d\n", a, b, DIV2(a, b));
	printf("DIV2(%d + 1, %d + 2) -> %d\n\n", a, b, DIV2(a + 1, b + 2));

	printf("MUL1(%d, %d) -> %d\n", a, b, MUL1(a, b));
	printf("MUL1(%d + 1, %d + 2) -> %d\n\n", a, b, MUL1(a + 1, b + 2));

	printf("MUL2(%d, %d) -> %d\n", a, b, MUL2(a, b));
	printf("MUL2(%d + 1, %d + 2) -> %d\n\n", a, b, MUL2(a + 1, b + 2));

	return 0;
}
