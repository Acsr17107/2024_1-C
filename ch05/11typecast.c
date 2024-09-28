#include <stdio.h>

int main(void)
{
	int a = 7.8;	   //자동으로 내림변환되어 변수 a에는 7,8이 저장
	double b = 5;      //자동으로 올림변환되어 변수 b에는 5.0이 저장

	printf("%d %f ", a, b);
	printf("%d %f ", (int)3.56, (double)3);
	printf("%f %d\n ", 3.56 + 7.87, (int)(3.56 + 7.87));
	
	printf("%d %f %f\n", 5 / 2, (double)5 / 2, (double)(5 / 2));

	return 0;
}