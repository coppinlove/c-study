#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	int num[5] = { 10, 20, 30, 40, 50 }; //5개 방을 나타냄 (명시적배열)
	int num2[] = { 10,20,30 }; //초기값의 수 만큼 방이 있음 (묵시적배열)
	
	/*printf("%d", num[2]);*/

	int num3[5] = { 1,2 };
	int num4[5] = { 4 };
	int num5[5] = { 0 };

	int num6[5];
	num6[0] = 100;
	num6[1] = 200;
	num6[2] = 300;
	num6[3] = 400;
	num6[4] = 500;



	for (int i = 0; i <= 4; i++) //0~4까지 5번 반복
	{
		printf("%d ", num6[i]); //배열 요소값 출력
	}







	return 0;
}