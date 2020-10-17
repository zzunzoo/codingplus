#include <stdio.h>

void bubble_sort(int list[], int n) {
	int i;
	int j;
	int temp;

	for(i = n - 1; i > 0; i--) {
		for(j = 0; j < i; j++) {
			if(list[j] < list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

void main() {

	int i;
	int list[5] = {7, 4, 5, 1, 3};

	bubble_sort(list, 5);

	for(i = 0; i < 5; i++) {
		printf("%d\n", list[i]);
	}
}
