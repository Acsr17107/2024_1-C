#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int dates;

	printf("일자 입력 >> ");
	scanf("%d", &dates);
	printf("입력한 날짜: %d\n", dates);
	printf("%d년 %d월 %d일", (dates / 365), (dates % 365) / 30, (dates % 365) % 30);

	return 0;
}