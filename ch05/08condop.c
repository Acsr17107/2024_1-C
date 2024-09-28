#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("두 정수 입력 >> ");
	scanf("%d%d", &a, &b);

	printf("최대값: %d ", (a > b) ? a : b);
	printf("최소값: %d\n", (a < b) ? a : b);
	printf("절대값: %d ", (a > 0) ? a : -a);
	printf("절대값: %d\n", (b > 0) ? b : -b);

	((a % 2) == 0) ? printf("짝수 ") : printf("홀수 ");
	printf("%s\n", ((b % 2) == 0) ? "짝수" : "홀수");

	return 0;
}