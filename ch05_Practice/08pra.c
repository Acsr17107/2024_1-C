#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	int year;

	printf("예치 기간 입력(년) >> ");
	scanf("%d", &year);

	float total_money = 1000000 * pow(1 + 4.5 / 100, year);

	printf("이율: 4.5%% 총금액: %.2f\n", total_money);

	return 0;
}