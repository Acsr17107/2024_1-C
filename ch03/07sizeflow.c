/* 소스: 07sizeflow.c */

#include <stdio.h>

int main(void)
{
	printf("     자료형 : 크기(바이트)\n");
	printf("     char   : %d\n", sizeof(char));
	printf("      int   : %d %d\n", sizeof(int), sizeof(200));
	printf("  long long : %d %d\n", sizeof(long long), sizeof(900LL));
	printf("      float : %d %d\n", sizeof(float), sizeof 3.14F);
	printf("long double : %d %d\n", sizeof(long double), sizeof 3.24L);

	short s = 32767;
	printf("%d\n", s);
	s = s + 1;
	printf("%d\n", s);   //오버플로 발생

	return 0;
}