#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int cred2, cred3;

	cred2 = cred3 = 0;

	printf("2학점과 3학점의 수강 과목 수를 각각 입력 >> ");
	scanf("%d %d", &cred2, &cred3);

	cred2 = 2 * cred2;
	printf("2학점 과목 총 학점: %d\n", cred2);
	printf("3학점 과목 총 학점: %d\n", cred3 = 3 * cred3);
	printf("총 학점: %d\n", cred2 + cred3);

	return 0;
}