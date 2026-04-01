#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num, cnt = 0, i;
	printf("원하는 배수 입력: ");
	scanf("%d", &i); //3
	printf("배수의 개수 입력: ");
	scanf("%d", &num); //5
	while (cnt++ < num)
		printf("%d ", i * cnt);
}					//0++ < 5 참 -> 1더하기 -----------> 3 * 1 cnt가 1 됨
					//1++ < 5 참 -> 1더하기 -----------> 3 * 2 cnt가 2 됨
					//2++ < 5 참 -> 1더하기 -----------> 3 * 3 cnt가 3 됨
					//3++ < 5 참 -> 1더하기 -----------> 3 * 4 cnt가 4 됨
					//4++ < 5 참 -> 1더하기 -----------> 3 * 5 cnt가 5 됨
					//5++ < 5 불 -> 종료