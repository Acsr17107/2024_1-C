#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int year, month, last_day;

    printf("년과 월을 다음과 같이 입력하면 그 달의 말일을 알려드립니다.\n");
    printf("2003 2 : 입력 >> ");
    scanf("%d %d", &year, &month);

    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        last_day = 31;
        break;
    case 4: case 6: case 9: case 11:
        last_day = 30;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            last_day = 29;
        else
            last_day = 28;
        break;

    default:
        printf("잘못된 월을 입력하셨습니다.\n");
        return 0;
    }

    printf("%d년 %d월의 말일은 %d일입니다.\n", year, month, last_day);

    return 0;
}
