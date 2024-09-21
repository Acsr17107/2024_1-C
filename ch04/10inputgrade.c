#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	char abc, plus;

	printf("C 프로그래밍 언어의 원하는 학점(A+, A0처럼)을 입력 >> ");
	//문자 두 개를 연이어서 입력 받음
	abc = getchar();
	scanf("%c", &plus);

	printf("학점 %c%c\n", abc, plus);

	return 0;
}