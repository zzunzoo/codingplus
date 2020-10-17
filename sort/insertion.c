#include <stdio.h>

void insertion_sort(int list[], int n) {
	int i;
	int j;
	int key;

	for(i = 1; i < n; i++) {
		key = list[i];

	for(j = i - 1; j >= 0&& list[j] > key; j--) {
		list[j + 1] = list[j];
	}

	list[j + 1] = key;
	}
}

void main() {
	int i;
	int list[5] = {8, 5, 6, 2, 4};

	insertion_sort(list, 5);

	for(i = 0; i < 5; i++) {
		printf("%d\n", list[i]);
	}
}
