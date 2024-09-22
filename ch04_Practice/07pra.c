#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float a, b;
	printf("두 실수를 입력하시오.\n");
	scanf("%f %f", &a, &b);
	printf("합  : %f + %f = %f\n", a, b, a + b);
	printf("평균: %f /  2 = %f\n", a + b, (a + b) / 2);

	return 0;
}