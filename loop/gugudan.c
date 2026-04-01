#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	for (a = 1; a <= 12; a += 3) //a가 3씩 증가하는 이유는 다음 밑칸부터는 a + 3단이 되기 때문
	{
		
		printf("\n   %d단", a);							//단수가     a단        a+1단       a+2단 이런식으로 출력
		printf("\t\t\t   %d단", a+1);
		printf("\t\t\t   %d단\t\t\t\n", a+2);

		for (b = 1; b <= 9; b++) // a * b할 때 b가 1~9까지 반복
		{
			printf("%d x %d = %2d\t\t", a, b, a * b);
			printf("%d x %d = %2d\t\t", a+1, b, (a+1) * b); //위처럼 단수를 높이기 위해 a * b    (a+1) * b    (a+2) *b 이런식으로 출력 
			printf("%d x %d = %2d\n", a+2, b, (a+2) * b);

		}

	}
}