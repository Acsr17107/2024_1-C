#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("세 개의 정수 입력 >> ");
	scanf("%d %d %d", &a, &b, &c);

	int max = a > b && a > c ? a : (b > c ? b : c);

	printf("가장 큰 수: %d\n", max);

	return 0;
}