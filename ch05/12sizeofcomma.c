#include <stdio.h>

int main(void)
{
	int a, x;
	a = x = 0;

	x = 3 + 4, 2 * 3;	  // (x = 3+4), 2*3;
	printf("x = %d ", x);
	x = (3 + 4, 2 * 3);	  // x = (3+4, 2*3);
	printf("x = %d\n", x);

	int byte = sizeof(double);
	printf("double Çü: %d bytes, %d bits\n", byte, byte * 8);
	int bit = (byte = sizeof a, byte * 8);
	printf("int Çü: %d bytes, %d bits\n", byte, bit);

	size_t sz = sizeof(short);
	printf("%zu\n", sz);

	return 0;
}