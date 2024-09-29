/* 소스: 06char.c */

#include <stdio.h>

int main(void)
{
	char c1 = 'a';      //소문자 a
	char c2 = 65;       //대문자 A가 코드 값 65
	char c3 = '\127';   //대문자 W의 8진수 코드 값 127
	char c4 = '\x57';   //대문자 W의 16진수 코드 값 57

	printf("문자 값(문자): %c %c %c %c\n", c1, c2, c3, c4);
	printf("코드 값(번호): %d %d %d %d\n", c1, c2, c3, c4);

	return 0;
}