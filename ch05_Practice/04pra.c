#include <stdio.h>

int main(void)
{
	float r = 8.32;
	float pi = 3.14;

	printf("구의 체적은 %.3f 입니다.\n", 4.0 / 3 * r * r * r * pi);
	printf("구의 표면적은 %.3f 입니다.\n", 4 * r * r * pi);

	return 0;
}