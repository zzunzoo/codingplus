#include <stdio.h>
#define SWAP(x, y, temp) ( (temp) = (x), (x)=(y), (y)=(temp) )

int partition(int list[], int left, int right) {
	int pivot;
	int temp;
	int low;
	int high;

	low = left;
	high = right + 1;
	pivot = list[left];

	do{
		do{
			low++;
		} while (low <= right && list[low] < pivot);

		do{
			high--;
		} while (high >= left && list[high] > pivot);

		if (low < high) {
			SWAP(list[low], list[high], temp);
		}
	} while (low < high);
		SWAP(list[left], list[high], temp);
		return high;
}

void quick_sort(int list[], int left, int right) {
	if (left < right) {
		int q = partition (list, left, right);
		quick_sort(list, left, q - 1);
		quick_sort(list, q + 1, right);
	}
}

void main() {
	int i;
	int list[9] = {5, 3, 8, 4, 9, 1, 6, 2, 7};

	quick_sort(list, 0, 8);
	
	for(i = 0; i < 9; i++) {
		printf("%d\n", list[i]);
	}
}
