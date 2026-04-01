#include <stdio.h>
int digit(int n) //'digit'라는 함수를 만든다 매개변수는 int n
{
	if (n < 10) return n; //n값이 10보다 작으면 n을 다시 돌려보낸다
	return (n % 10) + digit(n / 10); //n을 10으로 나눈 나머지와 n을 10으로 나눈 몫의 값을 digit함수에 넣은 값을 더한다
	//과정: 5 + digit(23) -> 3 + digit(2) -> 2        **결과**:5 + 3 + 2 = 10   따라서 10을 반환한다 
}

int main() //main부터 실행
{
	printf("%d", digit(235)); //digit함수에 '235'의 숫자를 보낸다음 반환값을 돌려받아 출력한다
}