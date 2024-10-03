#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592

#include <stdio.h>

int main(void)
{
	float r = 0;

	printf("원 반지름 입력: ");
	scanf("%f", &r);

	printf("원 반지름: %f\n", r);
	printf("원 면적: %f\n", r * r * PI);
	printf("원 둘레: %f\n", 2 * r * PI);

	return 0;
}