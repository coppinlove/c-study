#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	
	char a[30], b[30];

	printf("첫번째 문장을 입력하세요: ");
	scanf("%s", a); //&: 주소를 의미     a의 배열명은 배열의 첫 주소   배열의 요소는 &를 붙인다

	printf("\n두번째 문장을 입력하세요: ");
	scanf("%s", b);

	int res = strcmp(a, b); //문자열 비교
	//res = 0, 음수, 양수
	if (res < 0) 
	{
		printf("%s가 %s보다 앞이다.\n", a, b); //음수이면 문자열 1이 문자열 2보다 사전순으로 앞에있음
	}
	else if (res == 0)  //반환값이 0이면 완전히 같다
	{
		printf("%s가 %s와 같습니다.\n", a, b);
	}
	else 
	{
		printf("%s가 %s보다 뒤에 있다.", a, b); //양수이면 문자열 1이 문자열 2보다 사전순으로 뒤에 있음
	}




	return 0;
}