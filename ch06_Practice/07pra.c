#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month, quarter = 0;

	printf("년도의 월(month)을 입력하세요. >> ");
	scanf("%d", &month);

	if (month >= 1 && month <= 3)
		quarter = 1;
	else if (month >= 4 && month <= 6)
		quarter = 2;
	else if (month >= 7 && month <= 9)
		quarter = 3;
	else if (month >= 10 && month <= 12)
		quarter = 4;

	printf("%d월(month)은 %d분기입니다.\n", month, quarter);

	return 0;
}