#include <stdio.h>
#include <string.h>
enum FRUITLIST { apple, orange, grape = 5, peach, nofruit = 10 };
int indexcal(char* fname)
{
	if (!strcmp(fname, "사과")) return apple;
	else if (!strcmp(fname,"오렌지")) return orange;
	else if (!strcmp(fname, "포도")) return grape;
	else if (!strcmp(fname, "복숭아")) return peach;
	else return nofruit;
}
int main()
{
	typedef int Calorie;
	typedef double Brix;
	typedef struct s_FRUIT {
	Calorie cal;
	Brix brix;
	}FRUIT;
	FRUIT fruits[11];
	int i;
	char name[20];
	enum FRUITLIST idx;
	for (i = 0; i < 2; i++) {
		printf("과일 이름을 입력 : ");
		scanf("%s", &name);
		idx = indexcal(name);
		if(idx != nofruit) {
			printf("%s 1개 칼로리와 당도 입력 : ", name);
			scanf("%d%lf%*c", &fruits[idx].cal, &fruits[idx].brix);
			printf("%s의 칼로리와 당도 : %d, %.1f\n"
			, name, fruits[idx].cal, fruits[idx].brix);
		}
		else {
			printf("과일%s는 리스트에 없습니다.\n", name);
		}
	}
	return 0;
}
