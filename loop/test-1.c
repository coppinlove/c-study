#include <stdio.h>
int main() {
	/*int i, cnt = 0;
	for (i = 1;i <= 100;i++)
	{
		if (i % 3 == 0 && i % 7 == 0) //3과 7의 공배수
		{
			printf("%d*", i); //뒤에 *이 붙어있기 때문에 마지막에도 *출력
		}
	}*/
	
	int i;
	for (i = 0;i < 10;i++) //i = 0 ~ 10까지 1씩증가 반복
	{
		if (i % 3 == 0) continue; //i가 만약 3의 배수라면 위의 조건문으로 이동
		if (i > 5) break; //i가 5이상이면 반복문 종료
		printf("%d", i);
	}


}