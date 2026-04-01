#include <stdio.h>

int main()
{
	int num1, num2; //숫자 변수
	int res1; //정수 변수
	double res2; //실수 변수
	char op, quit; //연산자 및 종료 변수

	while (1) { //반복
		printf("\n\n첫번째 숫자를 입력하세요: "); //num1입력
		scanf_s("%d", &num1); //scanf에 _s를 붙이는 이유는 문자열에 제한을 두었을 때 오버플로우되기 때문

		printf("\n연산자 입력(+ - * /): "); //op입력
		scanf_s(" %c", &op);

		printf("\n두번째 숫자를 입력하세요: "); //num2입력
		scanf_s("%d", &num2);


		/*switch (op) {


			case '+':
			res1 = num1 + num2;
			break;

			case '-':
			res1 = num1 - num2;
			break;

			case '*':
			res1 = num1 * num2;
			break;

			case '/':
			res2 = (double)num1 / (double)num2;
			break;
		}*/

		if (op == '+') {
			res1 = num1 + num2;
		}

		else if (op == '-') {
			res1 = num1 - num2;
		}

		else if (op == '*') {
			res1 = num1 * num2;
		}

		else if (op == '/') {
			res2 = (double)num1 / (double)num2; //num1, num2가 정수형이기 때문에 실수형으로 바꾸려면 둘중에 하나는 double로 바꿔서 실수형으로 바꾼다
		}

		if (op == '+' || op == '-' || op == '*') { //or문 셋중에 하나 만족 -> 참
			printf("\n연산 결과: %d", res1);
		}

		else if (op == '/') {
			printf("\n연산 결과: %.2f", res2);
		}

		else {
			printf("error");
		}

		while (1) { //Y나 N을 입력하지 않았을 때의 문제를 해결하기 위해서 반복문 추가
			printf("\n\n연산을 종료하시겠습니까? (Y/N): ");
			scanf_s(" %c", &quit);

			if (quit == 'Y' || quit == 'y') { //대소문자 둘다 인식 가능하게 or 사용 (or = ||) 하나라도 만족 -> 참
				break;
			}
			else if (quit == 'N' || quit == 'n') {
				break;
			}
			else {
				printf("\n잘못된 입력입니다. Y 또는 N을 입력하세요.");
			}
		}

		if (quit == 'Y' || quit == 'y') { //Y 또는 y가 아니면 break가 없기 때문에 맨 위의 while문이 멈추지 않아 다시 실행
			break;   // 전체 계산 종료
		}
	}

	return 0;
}