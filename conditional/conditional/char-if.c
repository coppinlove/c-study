#include <stdio.h>

//문제) 1글자를 받아 대문자, 소문자, 숫자로 분류

int main() {

	char ch;
	printf("문자를 입력하세요: ");
	/*scanf_s("%c", &ch);*/
	ch = getchar(); //1글자 입력
	if (ch >= 'A' && ch <= 'Z') { //ch가 대문자 A~Z 만족하면 참 (65 ~ 90 대문자 코드)
	 //(ch >= 65 && ch <= 90) 
		printf("\n대문자입니다.");
	}
	
	else if (ch >= 'a' && ch <= 'z') { //ch가 소문자 a~z 만족하면 참 (97 ~ 122 소문자 코드)
		  //(ch >= 97 && ch <= 122)
		printf("\n소문자입니다.");
	}

	else if (ch >= '0' && ch <= '9') { //ch가 숫자 0~9 만족하면 참 (48 ~ 57 숫자 코드)
		  //(ch >= 48 && ch <= 57)
		printf("\n숫자입니다.");
	}

	else {
		printf("\n이외의 문자");
	}





	return 0;
}