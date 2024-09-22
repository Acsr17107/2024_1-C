#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char c;
	printf("문자 입력 : ");
	c = getchar();
	printf("%c\n", c);
	printf("%d %#o %#x\n", c, c, c);

	return 0;
}