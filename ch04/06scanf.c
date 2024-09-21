#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int    month = 0;
	printf("1년은 몇 달? ");
	scanf("%d", &month);
	printf("1년은 %d달\n\n", month);

	int snum, credit;
	printf("당신의 학번과 신청 학점은? ");
	scanf("%d%d", &snum, &credit);
	printf("학번: %d 신청학점: %d\n", snum, credit);

	return 0;
}