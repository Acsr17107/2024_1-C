#include <stdio.h>

int main(void)
{
	double grade = 4.21;

	printf("%d ", (4.0 < grade) && (grade <= 5)); //1
	printf("%d ", 0.0 || (4.0 > grade)); //0
	printf("%d\n", (4.2 < grade) || !0.0); //1
	printf("%d ", 'a' && 3.5); //1
	printf("%d ", '\0' || "C"); //1
	printf("%d ", "java" && '\0'); //0

	return 0;
}