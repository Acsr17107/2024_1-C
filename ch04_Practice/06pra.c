#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b;
	printf("두 정수를 입력하시오.\n");
	scanf("%d %d", &a, &b);
	printf("합  : %d + %d = %d\n", a, b, a + b);
	printf("평균: %d /  2 = %f\n", a + b, (a + b) / 2.0);

	return 0;
}