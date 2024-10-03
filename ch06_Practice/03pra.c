#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b;

	printf("두 실수 입력 >> ");
	scanf("%lf %lf", &a, &b);

	if (a > 0 && b > 0)
	{
		printf("결과값: %f\n", a + b);
	}
	else if (a > 0 && b <= 0)
	{
		printf("결과값: %f\n", a - b);
	}
	else if (a <= 0 && b > 0)
	{
		printf("결과값: %f\n", b - a);
	}
	else if (a <= 0 && b <= 0)
	{
		printf("결과값: %f\n", -a - b);
	}

	return 0;
}