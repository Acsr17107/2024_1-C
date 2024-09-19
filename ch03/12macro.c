/* 소스: 12macro.c */

#include <stdio.h>
#include <limits.h> //문자형, 정수형 상수가 정의된 헤더파일 삽입

int main(void)
{
	//헤더파일 limits.h에 정의된 각 자료형의 최대 최소 매크로 상수
	printf("%d ~ %d\n", CHAR_MIN, CHAR_MAX);
	printf("%d ~ %u\n", 0, USHRT_MAX);
	printf("%d ~ %d\n", INT_MIN, INT_MAX);
	printf("%lld ~ %lld\n", LLONG_MIN, LLONG_MAX);

	return 0;
}