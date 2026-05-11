#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int hapfun(int range);

int main() {
	int range;
	int total;

	printf("계산할 범위(n)를 입력하세요: ");
	scanf("%d", &range);

	if (range < 1) {
		printf("1 이상의 숫자를 입력하세요.");
	}
	else 
	{
		total = hapfun(range);
		printf("1 ~ %d까지의 3의 배수의 합은: %d", range, total);
	}

}

int hapfun(int range) {
	int cnt = 0;
	for (int i = 0; i <= range; i++)
	{
		if ((i % 3) == 0) {
			cnt += i;
		}
	}
	return cnt;
}