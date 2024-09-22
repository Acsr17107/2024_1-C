#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float p = 3.141592;
	float r = 0;

	printf("원 반지름 입력: ");
	scanf("%f", &r);
	printf("원 반지름: %f\n", r);
	printf("원 면적: %f\n", r * r * p);
	printf("원 둘레: %f\n", 2 * r * p);

	return 0;
}