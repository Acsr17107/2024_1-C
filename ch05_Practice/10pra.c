#include <stdio.h>
#include <math.h>

int main(void)
{
	double a = 2.0, b = 3.0, c = -4.0;
	double root1, root2;

	root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	printf("해1 %.3f\n", root1);
	printf("검증 계산 %.3f\n", a * root1 * root1 + b * root1 + c);
	printf("해2 %.3f\n", root2);
	printf("검증 계산 %.3f\n", a * root2 * root2 + b * root2 + c);

	return 0;
}