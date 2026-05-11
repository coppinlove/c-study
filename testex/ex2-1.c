#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//예제 1
	int num;
	printf("숫자를 입력하세요: ");
	scanf("%d", &num);

	if (num > 100) {
		printf("입력된 수 %d는 100초과입니다.", num);
	}
	else if (num == 100) {
		printf("입력된 수 %d는 100입니다.", num);
	}
	else {
		printf("입력된 수 %d는 100미만입니다.", num);
	}


	//예제 2

	int age;

	printf("\n나이를 입력하세요: ");
	scanf("%d", &age);

	if (age >= 20) {
		printf("나이가 %d이므로 성인입니다.", age);
	}
	else if (age < 10) {
		printf("나이가 %d이므로 어린이입니다.", age);
	}
	else {
		printf("나이가 %d이므로 청소년입니다", age);
	}
	return 0;
} 