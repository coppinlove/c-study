//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	for (int a = 1; a <= 10; a++)
//	{
//		if (a % 7 == 0)
//		{
//			continue; //아래의 문장으로 가지 않고 위의 반복문의 조건으로 올라가서 물어보고 반복한다.
//		}
//		printf("%d\n", a);
//	}
//}


#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 1; i <= 3; i++) {
        if (i == 2)
            continue;
        sum += i;
    }
    printf("continue 결과는 %d\n", sum);
    printf("\n\n");

    int num = 1;
    for (int i = 1; ; i++) { //조건식이 없음
        num = num * i;
        if (i > 3)
            break;
    }
    printf("break문제 결과는 %d\n", num);
    return 0;
}
