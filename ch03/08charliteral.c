/* 소스: 08charliteral.c */

#include <stdio.h>

int main(void)
{
	printf("%Cava", 'J');

	char sq = '\'';                 //작은따옴표
	printf("%c\7\n", '\a');         //알람 문자를 2번 출력하고 공백 줄
	printf("%c자바 언어'\n", sq);   //문자열 내부에서는 '(작은따옴표) 그대로 사용 가능

	//문자열 내부에서는 "(큰따옴표) 반드시 \"로 사용
	printf("\"C언어\" 정말 재미있다!\n");

	return 0;
}