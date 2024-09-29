#include <stdio.h>

int main(void)
{
	float const m = 0.621371;
	printf("%3d(km): %.3f(mile)\n", 60, 60 * m);
	printf("%3d(km): %.3f(mile)\n", 80, 80 * m);
	printf("%3d(km): %.3f(mile)\n", 100, 100 * m);
	printf("%3d(km): %.3f(mile)\n", 120, 120 * m);

	return 0;
}