#include <stdio.h>

int main(void)
{
	printf("    1234567890\n");
	int year = 1999;
	printf("C99 %8d\n", year);
	printf("C99 %+8d\n", year);
	printf("C99 %-8d\n", year);
	printf("C99 %-+8d\n\n", year);

	float f = 3.141592F;
	printf("    1234567890\n");
	printf("PI= %10f\n", f);
	printf("PI= %10.3f\n", f);
	printf("PI= %.3f\n", f);
	printf("PI= %-10.4f\n", f);

	return 0;
}