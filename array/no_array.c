#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, d, e, f, g, h, i, j;
	
	printf("10명의 점수를 입력하세요: ");
	scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

	double sum = a + b + c + d + e + f + g + h + i + j;

	printf("10명 점수 합계: %.2f\n", sum);
	printf("10명 점수 평균: %.2f", sum / 10);


	return 0;
}