/**
 *  소스: 02variables.c
 *  버전: V 1.0
 **/

#include <stdio.h>

int main(void)
{
	int year = 2022;   //선언과 동시에 변수 초기화

	int credits;
	credits = 15;      //선언된 변수에 초기화
	
	printf("%d년도\n", year);
	printf("이수학점: %d학점\n", credits);

	return 0;
}