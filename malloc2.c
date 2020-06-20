#include <stdio.h>
#include <stdlib.h>

int main()
{

	int *ip;
	ip = (int *)malloc(sizeof(int));

	if(ip = NULL){
		printf("동적 할당을 실패했습니다.\n메모리가 부족합니다.\n");
		exit(1); //프로그램 종료
	}

	ip = 10;
	
	printf("동적 활당 영역에 저장된 값 출력 : %d\n", ip);

	free(ip); //동적 활당 영역 반환

	return 0; 
}
