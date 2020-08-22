#include <stdio.h>

extern void ALPHABET(char c);

int main()
{
	char c = 65;

	for (int i = 0; i < 26; i++) {
		ALPHABET(c + i);
	}

	return 0;
}



#include <stdio.h>

void ALPHABET(char c) {
	printf("%c ", c);
}


	
