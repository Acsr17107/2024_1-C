#include <stdio.h>

int main(void)
{
	printf("%3o %3d %3x\n", 10, 10, 10);   //10�� 8, 10, 16������ ���� ���
	printf("%#3o %3d %#3x\n", 12, 12, 12);
	printf("%3o %3i %3X\n", 14, 14, 14);

	return 0;
}