#include <stdio.h>

int main() {

	/*int a;
	a = sizeof(int) + sizeof(char); //int = 4byte, char = 1byte
	printf("%d", a);*/


	//int a = 7 + 6;
	//int b = (int)7.3 + (int)6.7; //숫자를 정수형으로 바꾼다음 int b에 넣는다 따라서 7 + 6을하고 13을 b에 넣는다
	//printf("%d %d", a, b);

	float t;
	t = 10 / 3;
	printf("%f", t);
	t = (float)10 / 3;
	printf("\n%f", t);
	return 0;
}