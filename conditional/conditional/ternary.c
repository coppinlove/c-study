#include <stdio.h>

/*삼항연산자 : if~else를 간결히 표현
  조건? A:B -> 조건이 참이면 A 아니면 B*/


int main() {

	/*int a = 10, b = 20;
	int max;
	max = a > b ?a :b;
	printf("%d", max);*/

	int x;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &x);
	x % 2 == 0 ? printf("\n짝수") : printf("\n홀수"); // 조건 뒤에 ? = 참일때, : = 거짓일때 의미 % = 나머지 



	return 0;
}