#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double h, w;

	printf("신장(cm)과 몸무게(kg)를 입력하세요: ");
	scanf("%lf %lf", &h, &w);

	h = h / 100;
	double bmi = w / (h * h);
	h = h * 100;

	if (bmi >= 40)
	{
		printf("신장: %.2f, 몸무게: %.2f. BMI지수: %.2f 고도 비만\n", h, w, bmi);
	}
	else if (bmi >= 35 && bmi < 40)
	{
		printf("신장: %.2f, 몸무게: %.2f. BMI지수: %.2f 중등도 비만\n", h, w, bmi);
	}
	else if (bmi >= 30 && bmi < 35)
	{
		printf("신장: %.2f, 몸무게: %.2f. BMI지수: %.2f 비만\n", h, w, bmi);
	}
	else if (bmi >= 25 && bmi < 30)
	{
		printf("신장: %.2f, 몸무게: %.2f. BMI지수: %.2f 과체중\n", h, w, bmi);
	}
	else if (bmi >= 18.5 && bmi < 25)
	{
		printf("신장: %.2f, 몸무게: %.2f. BMI지수: %.2f 정상\n", h, w, bmi);
	}
	else if (bmi < 18.5)
	{
		printf("신장: %.2f, 몸무게: %.2f. BMI지수: %.2f 저체중\n", h, w, bmi);
	}

	return 0;
}