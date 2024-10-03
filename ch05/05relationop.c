#include <stdio.h>

int main(void)
{
	int speed = 80;
	printf("%d ", (60 <= speed));
	printf("%d\n", (60 > speed));

	printf("%d ", ('a' > 'b'));
	printf("%d\n", ('Z' <= 'a'));
	printf("%d ", (4 == 4.0));
	printf("%d\n", (4.0F != 4.0));

	return 0;
}