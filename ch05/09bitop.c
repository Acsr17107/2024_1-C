#include <stdio.h>

int main(void)
{
	int x = 15; // 1111

	printf("%9x\n", -1);				// 1111
	printf("%3d\n", 10 & -1);			// 10
	printf("%3d\n\n", 10 | 0);			// 10

	printf("%3d %08x\n", x, x);			// 1111
	printf("%3d %08x\n", 1, x & 1);		// 1111 & 0001
	printf("%3d %08x\n", 15, x | 1);	// 1111 | 0001
	printf("%3d %08x\n", 14, x ^ 1);	// 1111 ^ 0001
	printf("%3d %08x\n", ~x, ~x);		// -16

	return 0;
}