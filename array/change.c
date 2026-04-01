#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int price, money, change, a, b, c, d, e;
	a = 0, b = 0, c = 0, d = 0, e = 0;

	printf("물건값 입력: ");
	scanf("%d", &price);

	printf("\n투입금액 입력: ");
	scanf("%d", &money);

	change = money - price;

	if (money > price)
	{
		a = change / 5000;
		change %= 5000;

		b = change / 1000;
		change %= 1000;

		c = change / 100;
		change %= 100;

		d = change / 10;
		change %= 10;

		e = change;
	}
	else if(money == price)
	{
		printf("\n잔돈 X");
		return 0;
	}
	else
	{
		printf("\nerror");
		return 0;
	}

	
	printf("\n5천원:%d개, 1천원:%d개, 100원:%d개, 10원:%d개, 1원:%d개", a, b, c, d, e);
	

	return 0;
}
