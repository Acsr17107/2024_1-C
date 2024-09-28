#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float cm;

	printf("길이를 센티미터로 입력 (소수) >> ");
	scanf("%f", &cm);

	float feet = cm / 30.48;

	printf("%f 센티미터: %.3f 피트\n", cm, feet);

	return 0;
}