#include <stdio.h>


main()
{
	int a, b, c;
	a = 5 % 3; //나머지 = 2
	a--; //-1돼서 1
	b = (a++) + 3; //b = 4
	printf("%d,%d\n", a, b); //a = 2
	c = (++a) + 3; //c = 6 a = 3
	printf("%d,%d,%d", a, b, c);
}