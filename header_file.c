#include <stdio.h>
#define MODE 1
#define INTMODE
typedef long long int COUNTER;
COUNTER gi = 10;
void Conprt(void);
#if MODE == 0
#define LIM 20
#else
#define LIM 40
#endif
#ifdef INTMODE
int add(int a, int b) { return a + b + gi; }
#else
double add(double a, double b) { return a + b + (double(gi); }
#endif

int main()
{
	ConPrt();
#ifdef INTMODE
	printf("add = %d\n", add(3, 4));
#else
	printf("add = %f\n", add(3, 4));
#endif
	return 0;
}
void ConPrt(void)
{ printf("MODE = %d LIM = %d ", MODE, LIM); }
