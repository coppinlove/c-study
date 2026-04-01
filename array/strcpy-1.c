#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //include: 전처리기, 입출력 관련 헤더파일
#include <string.h>


int main(void) 
{
	char a[10] = { "hello" };
	printf("%s\n", a);
	printf("%c\n", a[0]);

	char b[10] = { 'L','O','V','E' };
	strcpy(b, "love"); //문자열 복사 (대상, 문자열)
	/*b = "love";
	b[0] = 'L';
	b[1] = 'O';
	b[2] = 'V';
	b[3] = 'E';*/
	printf("%s", b);
	//strcpy: 문자열을 선언이후 뒤에 초기화가 안됨
	// 이후 문자열 입력 할 때




	return 0;
}