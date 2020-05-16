#include <stdio.h>
#include <string.h>
struct shop{
	char name[20];
	char category[10];
	int price;
	int stock;
};

int main() {
	struct shop List[5], *lP = List;
	int i;

	for (i = 0; i < 5; i++) {
	printf("상품명 : ");
	scanf("%s", (lP + i)->name);
	printf("분류 : ");
	scanf("%s", (lP + i)->category);
	printf("가격 : ");
	scanf("%d", &(lP + i)->price);
	printf("재고 : ");
	scanf("%d", &(lP + i)->stock);
	printf("\n");
	}

	for(i = 0; i < 5; i++) {
	printf("상품명 : %s\n", (lP + i)->name);
	printf("분류 : %s\n", (lP + i)->category);
	printf("가격 : %d\n", (lP + i)->price);
	printf("재고 : %d\n", (lP + i)->stock);
	printf("==========================\n");	
	}
	return 0;
}
