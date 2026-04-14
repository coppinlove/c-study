#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int adddddddddddddddd(int a, int b);
void suuuuuuuuuuuuuub(int a, int b);
void arrrrrrprint(int c[5]);


int main(void)
{
	int a = 10, b = 20, c[5] = { 1,2,3,4,5 };
	int sum = adddddddddddddddd(a, b);
	printf("덧셈 결과: %d\n", sum);
	suuuuuuuuuuuuuub(a, b);

	arrrrrrprint(c);
	return 0;
}

int adddddddddddddddd(int a, int b)
{
	int sum = a + b;

	return sum;
}

void suuuuuuuuuuuuuub(int a, int b)
{
	int sub = a - b;
	printf("뺄셈 결과: %d\n", sub);
}

void arrrrrrprint(int c[5])
{
	for (int a = 0; a < 5; a++)
	{
		printf("%d\n", c[a]);
	}
}