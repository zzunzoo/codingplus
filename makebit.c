#include <stdio.h>

int makebit(unsigned short x, int n);
char *makebinary(unsigned short i);

int main(void) {

        unsigned short num = 1048;
        printf("%s\n", makebinary(num));

        printf("%d\n", makebit(num, 0));

        printf("%d\n", makebit(num, 1));

        printf("\n[ ");
        for (int i = 15; i >= 0; i--) {
                printf("%d", makebit(num, i));
        }
        printf(" ]\n");

        return 0;
}

int makebit(unsigned short x, int n) {
        return (x & (1 << n)) >> n;
}


char *makebinary(unsigned short i) {
        static char bin[16 + 1] = { '0', };
        int count = 16;

        do { bin[--count] = '0' + (char) (i & 1);
                i = i >> 1;
        } while (count);

        return bin;
}
