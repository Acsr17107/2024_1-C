#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int amount = 0;
	int coupons = 10; //각각 10 이상과 10 미만을 입력

	printf("총 금액 >> ");
	scanf("%d", &amount); //각각 10000원 이상과 미만을 입력

	int sale = (amount >= 10000) && (coupons++ >= 10);
	printf("할인: %d, 쿠폰 수: %d\n", sale, coupons);

	return 0;
}