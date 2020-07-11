#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[1024];
	FILE *fr = fopen("./Hello.text", "r");

	fgets(str, sizeof(str), fr);

	printf("%s\n", str);

	fclose(fr);

	return 0;
}
