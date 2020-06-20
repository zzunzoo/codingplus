#include <stdio.h>
#include <stdlib.h>

int main()
{

	int *ip;
	int i;
	int a;

	printf("배열의 크기를 입력하세요 : ");
	scanf("%d", &a);

	ip = (int *)malloc(a*sizeof(int)); //입력 받은 크기만큼 저장 공간 할당

	if(ip == NULL) {
		printf("동적 할당을 실패했습니다.\n메모리가 부족합니다.\n");
		exit(1); // 프로그램 종료
	}

	for (i = 0; i < a; i++) {
		ip[1] = i + 1;
		printf("%d ", ip[1]);
	}

	free(ip); //할당한 메모리 영역 반환

	return 0;
}
