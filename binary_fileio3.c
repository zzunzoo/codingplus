#include <stdio.h>

int main()
{
	int i;
	int bit[5];

	FILE *fp = fopen("binary.dat", "rb");

	fread(bit, sizeof(int), 5, fp);

	for(i = 0; i < 5; i++) {
		printf("%d ", bit[i]);
	}
	fclose(fp);

	return 0;
}
