#include <stdio.h>
#include <string.h>
struct height{
char name[10];

double height;
};

int main() {
struct height List[5];

int i;
int j;
double min = 1000;
char minName[10];

for (i = 0; i < 5; i++) {
scanf("%s %lf", List[i].name, &List[i].height);
}
for (i = 0; i < 5; i++) {
if (min > List[i].height) {
strcpy(minName, List[i].name);
min = List[i].height;
}
}


printf ("%5s%6.2lfcm\n", minName, min);

return 0;
}


