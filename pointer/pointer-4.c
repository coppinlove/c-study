#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_even(int ar[10]);
void print_cnt(int res);

int main(void)
{
	int ar[10];
	printf("정수 10개 입력: ");
	for (int a = 0; a < 10; a++)
	{
		scanf("%d", &ar[a]);
	}
	int res = count_even(ar);
	print_cnt(res);
	/*printf("짝수의 개수는 %d개 입니다", res);*/
	


	return 0;
}


int count_even(int ar[10])
{

	int cnt = 0;

	for (int a = 0; a < 10; a++)
	{
		ar[2] = 4; //여기서 바꿔도 main함수에서도 바뀜 배열 자체가 주소임 참조함
		if (ar[a] % 2 == 0)
		{
		cnt += 1;
		}
	}

	return cnt;
}

void print_cnt(int res)
{
	printf("짝수의 개수는 %d개 입니다", res);
}