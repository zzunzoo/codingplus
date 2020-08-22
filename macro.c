#include <stdio.h>
#define AVG1(X, Y) (((X)+(Y))/2.0)
#define AVG2(X, Y) ((X)+(Y))/2.0
#define AVG3(X, Y) (X+Y)/2.0
#define FOR(BEGIN, END)\
	for (int i = BEGIN; i < END; i++)\ 	
		printf("%d ", i);\
	printf("\n")
#define PRTBLOOD(X) printf("Blood type : %s\n ", X)
#define MAX(X, Y) (X < Y ? Y : X)
#define MAXPRT(X, Y) printf("Max value : %d\n", MAX(X, Y))
int main()
{
	int a = 2;
	int b = 5;
	printf("#1 AVG3(X, Y) Macro: %.1f  ", AVG3(a, b));
	printf("#2 AVG2(X, Y) Macro: %.1f\n", AVG2(++a, ++b));
	printf("#3 AVG3(X, Y) Macro: %.1f  ", AVG3(a & 3, b & 3));
	printf("#4 AVG2(X, Y) Macro: %.1f\n", AVG2(a & 3, b & 3));
	printf("#5 AVG2(X, Y) Macro: %.1f  ", (int)AVG2(a & 3, b & 3));
	printf("#6 AVG1(X, Y) Macro: %d\n", (int)AVG1(a & 3, b & 3));
	FOR(0, 3); 
	PRTBLOOD("AB");  
	MAXPRT(3, 4);
	return 0;
}

