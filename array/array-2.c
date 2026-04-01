#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5

int main()
{
	int score[STUDENTS], sum = 0, count= 0;
	
	
	
	for (int a = 0; a <= 4; a++)
	{
		printf("%d번째 점수를 입력하세요: ", a+1);
		scanf("%d", &score[a]);
		printf("\n");
		if (score[a] > 100 || score[a] < 0)
		{
			a -= 1;
			continue;
		}
			
		else if (score[a] == 0)
			continue;

		sum += score[a];
		count++;
	}

	printf("점수 평균: %.2f", ((float)sum)/count);



	return 0;
}