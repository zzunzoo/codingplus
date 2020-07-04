#include <stdio.h>
#include <stdlib.h>
int main()
{
	struct food{
		char dish[30];
		double calorie;
	} *dayMeal;
	int i;
	int num;
	double sumCal = 0.0;
	printf("오늘 식사를 몇 번 하셨습니까?");
	scanf("%d", &num);
	dayMeal = (struct food*)malloc(num * sizeof(struct food));
	for (i = 0; i < num; i++) {
		printf("%d 번째 식사(음식명/칼로리) : ", i + 1);
		scanf("%s%lf", dayMeal[i].dish, &dayMeal[i].calorie);
		sumCal += dayMeal[i].calorie;
		if (sumCal > 2500) {
			printf("하루 권장 칼로리(2500 Kcal)를 %d만큼 \
				초과하였습니다.\n", (int)sumCal - 2500);
		}
	}
	for ( i = 0; i < num; i++) {
		printf("#%d Dish: %18s, Calorie = %6.1f\n",
		i + 1, (dayMeal + i)->dish, (dayMeal + i)->calorie);
	}
	free(dayMeal);
	return 0;
}
			
