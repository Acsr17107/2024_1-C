#include <stdio.h>

int main(void)
{
	printf("%d * %4d = %#5o\n", 2, 2, 2 * 2);
	printf("%d * %04d = %#5o\n", 2, 3, 2 * 3);
	printf("%d * %+04d = %-#5x\n", 2, 4, 2 * 4);
	printf("%d * %+-4d = %+#5X\n", 2, 5, 2 * 5);

	printf("%15.3f\n", 123456.789);
	printf("%e\n", 123456.789);
	printf("%g\n", 12.34e-5);
	printf("%G\n", 12.34e-6);

	return 0;
}