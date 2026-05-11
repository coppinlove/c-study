#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int sum(int a, int b);
int mul(int a, int b);

int main() {
	int num1, num2;
	printf("숫자 2개를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	printf("덧셈결과: %d\n", sum(num1, num2));
	printf("곱셈결과: %d", mul(num1, num2));
}

int sum(int a, int b) {
	return a + b;
}

int mul(int a, int b) {
	return a * b;
}