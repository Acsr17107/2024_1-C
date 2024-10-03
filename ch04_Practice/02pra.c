#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float f;

	printf("È­¾¾ ¿Âµµ ÀÔ·Â: ");
	scanf("%f", &f);
	printf("ÀÔ·ÂµÈ È­¾¾ ¿Âµµ: %f\n", f);

	float c = 5.0 / 9.0 * (f - 32.0);

	printf("¼·¾¾ ¿Âµµ: %.4f\n", c);

	return 0;
}