#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	

	//예제 1
	int score;
	printf("점수를 입력하세요: ");
	scanf("%d", &score);
	score >= 60 ? printf("%s\n", "합격입니다.") : printf("%s\n", "불합격입니다.");
	
	
	
	//예제 2
	int num1, num2;
	printf("숫자 2개를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	num1 > num2 ? printf("%d이(가) 더 큽니다.", num1) : printf("%d이(가) 더 큽니다.", num2);

	return 0;

}