#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float const m = 3.305785;
	float a;

	printf("평수 입력: ");
	scanf("%f", &a);
	printf("입력된 평수: %f\n", a);
	printf("제곱미터: %f", a * m);

	return 0;
}