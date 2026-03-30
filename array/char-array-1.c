#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[30] = "C language"; //문자배열 30자
	int i = 0; //0부터 시작

	while (str[i] != '\0') //만족할 때 반복   != --> 다르다   \0는 NULL값을 의미한다. 문자열이 끝나는 시점을 알림
		i++;

		printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
	
	return 0;
}