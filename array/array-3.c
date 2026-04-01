#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	//int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} }; //초기값
	////a[행] [열] 0~2행 0~2열 -> 9개 요소 구성
	//int i, j;
	//for (i = 0;i < 3;i++) //행 의미
	//{
	//	for (j = 0;j < 3;j++) //열 의미
	//		printf("%d\t", a[i][j]); //9번 출력

	//	printf("\n");
	//}

	int b[4][3] = { {100, 200, 300}, {10, 0, 0}, {50, 100, 150}, {30, 40, 0} };

	int i, j, sum = 0;
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 3;j++) 
		{
			printf("%d\t", b[i][j]);
			sum += b[i][j];
		}
			
		
		
	}

	printf("\n합계: %d", sum);


		return 0;
}