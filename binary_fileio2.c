#include <stdio.h>

int main()
{
        int i;
        int bit[5] = {1, 2, 3, 4, 5};

        FILE *fp = fopen("binary.dat", "wb");

        fwrite(bit, sizeof(bit), 5, fp);

        fclose(fp);

        return 0;
}
