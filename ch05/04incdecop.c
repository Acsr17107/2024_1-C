#include <stdio.h>

int main(void)
{
	int m = 1, n = 5;

	printf("%d %d\n", m++, ++n);//1 6
	printf("%d %d\n", m, n);    //2 6
	printf("%d %d\n", m--, --n);//2 5
	printf("%d %d\n", m, n);    //1 5

	return 0;
}