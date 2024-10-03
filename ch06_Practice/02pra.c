#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double a, b;

	printf("ÁÂÇ¥ x, y ÀÔ·Â >> ");
	scanf("%lf %lf", &a, &b);

	if (a > 0 && b > 0)
	{
		printf("ÁÂÇ¥ (%.2f, %.2f): 1»çºÐ¸é\n", a, b);
	}
	else if (a < 0 && b > 0)
	{
		printf("ÁÂÇ¥ (%.2f, %.2f): 2»çºÐ¸é\n", a, b);
	}
	else if (a < 0 && b < 0)
	{
		printf("ÁÂÇ¥ (%.2f, %.2f): 3»çºÐ¸é\n", a, b);
	}
	else if (a > 0 && b < 0)
	{
		printf("ÁÂÇ¥ (%.2f, %.2f): 4»çºÐ¸é\n", a, b);
	}

	return 0;
}