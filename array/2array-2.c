#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    int i;
    char menu[5][10] = { //5행 10열 (0~4행, 0~9열)
        "init", //1행식 초기값 설정
        "open",
        "close",
        "read",
        "write"
    };

    for (i = 0; i < 5; i++)
        printf("%d 번째 메뉴: %s \n", i+1, menu[i]); //열을 생략한 것            행을 의미

    return 0;
}