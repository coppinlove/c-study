#include <stdio.h>

void f3();
void arrPrint(int k[2][3]);



void f1() //함수 f1
{
	int a[2][3] = { {4, 5, 6}, {7, 8, 9} };
	/*a[0][0] = 4;
	a[0][1] = 5;
	a[0][2] = 6;
	a[1][0] = 7;
	a[1][1] = 8;
	a[1][2] = 9;*/
	printf("%d\n", a[0][0]);
	printf("%d\n", a[0][1]);
	printf("%d\n", a[0][2]);
	printf("%d\n", a[1][0]);
	printf("%d\n", a[1][1]);
	printf("%d\n", a[1][2]);
	printf("=================================\n");
}

void f2()
{
	int b[2][3];
	int totalsize = sizeof(b); //24byte
	printf("%d\n", totalsize);
	int bsize = sizeof(b[0]); //행 - 4 x 3 = 12 byte
	printf("%d\n", bsize); //12byte
	printf("%d\n", sizeof(b[0][0])); //4byte
	printf("%d\n", sizeof(b) / sizeof(b[0])); //24 / 12 = 2
	printf("%d\n", sizeof(b[0]) / sizeof(b[0][0])); //12 / 4 = 3
	printf("=================================\n");
}



int main() //main 함수 1개, 처음 시작할 때 main부터 시작
{

	/*f1();
	f2();*/
	f3();

	return 0;
}

void f3()
{
	int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
	//a[0][0] = 1 [0][1] = 2 [0][2] = 3 [1][0] = 4 [1][1] = 5 [1][2] = 6
	arrPrint(a); //인수 보내면서 함수호출 / a배열([2][3]전체)을 arrPrint함수를 호출할대 같이 보냄
	int b[2][3] = { {1}, {4} }; //100 400
	arrPrint(b);
	int c[2][3] = { {1, 2} }; //120 000
	arrPrint(c);
	int d[2][3] = { 1, 2, 3, 4, 5, 6 };
	arrPrint(d);
	int i[2][3] = { 1, 2, 3, 4 }; //123 400
	arrPrint(i);
	int j[2][3] = { 1, 2 }; //120 000
	arrPrint(j);
	int k[2][3] = {0}; //000 000
	arrPrint(k);
}

void arrPrint(int k[2][3])
{
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			printf("%d\n", k[i][j]);
		}
		printf("\n");
	}
		
}