#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	/*int a, b;
	
	printf("단수를 입력하세요: ");
	scanf("%d", &a); //a 즉 단수를 입력받는다.
	printf("< %d단 >\n", a); //%d에 a의 값을 출력한다.

	for (b = 1; b <= 9; b++) //구구단은 1~9까지 반복해서 곱하는 것이므로 b가 n * b 이므로 b가 1씩 증가한다.
	{
		printf("%d * %d = %d\n", a, b, a * b); //곱셈형식을 쓰기 위해서 %d 와 %d 사이에 * 문자를 넣어 곱셈한다는 것을 나타내고 %d * %d = %d 는 즉 a * b = a*b가 된다.
	}*/

	int a, b;

	for (a = 2; a <= 9; a++) //a가 단수 2부터 시작
	{
		printf("\n< %d >단\n", a); //단수 출력 %d에 a값이 들어감

		for (b = 1; b <= 9; b++) //단수 옆 1~9 까지 곱하는 수를 반복한다 1씩 증가
		{
			printf("%d * %d = %-3d\n", a, b, a * b); //%3d는 3자리를 뜻하는데 오른쪽부터 정렬하지만 -가 붙으면 왼쪽부터 정렬한다.
		} //b의 괄호
	} //a의 괄호
	return 0;
} //main의 괄호