#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("임의의 정수 입력1 : ");
	scanf("%d", &a);
	printf("임의의 정수 입력2 : ");
	scanf("%d", &b);

	int c = a > b ? a / b : b / a;
	int d = a > b ? a % b : b % a;

	printf("몫은 %d 이고 나머지는 %d 입니다.\n", c, d);

	return 0;
}