#include <stdio.h>

int main(void)
{
	int speed = 90;
	int x = 1, y = 2, z = 3;

	printf("%d ", 60 <= speed && speed <= 80 + 20); //산술 > 관계 > 논리
	printf("%d ", ((60 <= speed) && (speed <= (80 + 20))));

	printf("%d ", x % 2 == 0 ? y + z : y * z); //산술 > 관계 > 조건
	printf("%d ", (x % 2 == 0) ? (y + z) : (y * z));

	printf("%d ", speed += ++x && y - 2); //단항++ > 산술 > 논리 > 대입
	printf("%d\n", speed += ((++x) && (y - 2)));

	return 0;
}