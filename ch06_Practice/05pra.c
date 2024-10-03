#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int g;
	double h, w, sw, o;

	printf("성별을 먼저 입력하세요. 1(남자), 2(여자): ");
	scanf("%d", &g);
	printf("신장(cm)과 몸무게(kg)를 입력하세요: ");
	scanf("%lf %lf", &h, &w);

	switch (g) {
	case 1:
		sw = h / 100 * h / 100 * 22;
		printf("현재 신장: %.2f, 체중: %.2f, 표준 체중: %.2f\n", h, w, sw);
		break;
	case 2:
		sw = h / 100 * h / 100 * 21;
		printf("현재 신장: %.2f, 체중: %.2f, 표준 체중: %.2f\n", h, w, sw);
		break;
	}

	o = (w / sw) * 100;

	if (o / 10 < -10)
		printf("비만지수: %.2f, 판정: 저체중\n", o);
	else if (o / 10 >= -10 && o / 10 < 10)
		printf("비만지수: %.2f, 판정: 정상\n", o);
	else if (o / 10 >= 10 && o / 10 <= 20)
		printf("비만지수: %.2f, 판정: 체중 과다\n", o);
	else if (o / 10 > 20)
		printf("비만지수: %.2f, 판정: 비만\n", o);

	return 0;
}