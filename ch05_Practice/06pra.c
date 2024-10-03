#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float height, weight;

	printf("키 입력: ");
	scanf("%f", &height);
	printf("몸무게 입력: ");
	scanf("%f", &weight);
	printf("당신은 %s 입니다.\n", (weight <= (height - 100) * 0.9) ? "정상" : "비만");

	return 0;
}