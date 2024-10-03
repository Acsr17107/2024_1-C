#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int hex;
	printf("10진수 정수(1A 등)를 입력하세요 >> ");
	scanf("%x", &hex);
	printf("%o %d %x\n\n", hex, hex, hex);

	printf("10진수 정수(0리딩 표시방식으로 0x1a 등)를 입력하세요 >> ");
	scanf("%i", &hex);
	printf("%#o %d %#x\n\n", hex, hex, hex);

	return 0;
}