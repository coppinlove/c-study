#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 3000;
	int* p = NULL;

	p = &i;

	printf("p = %p\n", p);

	printf("&i = %p\n\n", & i);

	printf("i = %d\n", i);
	printf("*p = %d\n", *p);
	printf("i = %d\n", i + 1000);
	printf("*p = %d\n\n\n", (*p) + 2000);

	int x = 10, y = 20;
	int* pi; // 포인터 변수

	pi = &x; // x의 주소를 포인터변수 pi에 준다
	printf("pi = %p\n", pi); // x의 주소값을 출력한다
	printf("*pi = %d\n", *pi); // x의 주소에 있는 값을 출력한다

	pi = &y; // y의 주소를 포인터변수 pi에 준다
	printf("pi = %p\n", pi); // y의 주소값을 출력한다
	printf("*pi = %d\n", *pi); // y의 주소에 있는 값을 출력한다

	return 0;
}
