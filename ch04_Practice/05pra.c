#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float a, b;

	printf("두 실수 입력: ");
	scanf("%f %f", &a, &b);
	printf("가로: %f 세로: %f\n", a, b);
	printf("사각형 면적: %12.3f\n", a * b);
	printf("삼각형 면적: %-12.3f\n", a * b / 2);

	return 0;
}