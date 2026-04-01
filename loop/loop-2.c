#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, num, sum = 0;

	printf("숫자를 입력하세요: ");
	scanf("%d", &num);
		for (a = 1; a <= num; a += 1)
		{
			sum += a;
		}
		printf("숫자의 합: %d", sum);
}