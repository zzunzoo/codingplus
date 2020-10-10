#include <stdio.h>
#define SWAP(x, y, temp) ( (temp) = (x),(x)=(y), (y) = (temp) )

void selection_sort(int list[], int n) {
	int i;
	int j;
	int least;
	int temp;

	for(i = 0; i < n - 1; i++) {
		least = i;
	

		for (j = i + 1; j < n; j++) {
			if (list[j] < list[least]) {
				least = j;
			}
		}

		if(i != least) {
			SWAP(list[i], list[least], temp);
		}	
	}
}	

void main() {
	int i;
	int list[5] = {9, 6, 7, 3, 5};

	selection_sort(list, 5);

	for(i = 0; i < 5; i++) {
		printf("%d\n", list[i]);
	}
}
