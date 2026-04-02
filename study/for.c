#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int increase(int n) {
	return n + 1;
}

int main() {
	int n = 10;
	n = increase(n);
	printf("%d", n);
	return 0;
}