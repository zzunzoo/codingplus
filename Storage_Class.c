#include <stdio.h>
	int gi;
	static int sgi;
	extern void inc2(void);
	void inc1(void)
{
	register int ia = 0;
	static int s_ia = 0;
	printf("ia = %d, s_ia = %d gi = %d sgi = %d\n",
		++ia, ++s_ia, ++gi, ++sgi);
}
int main()
{
	int i = 10;
	int b = 20;
	int gi = 10;
	int sgi = 10;
	for (int i = 0; i < 3; i ++) {
		int b = 0;
		inc1();	inc2();
		++b;	sgi += 2;
	}
	printf("i = %d %d\n", i, b);
	return 0;
}
void inc2(void)
{ extern int gi;	++gi; }

