#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    char cha;
    double temperature, celsius, fahrenheit;

    printf("입력한 온도를 변환합니다.\n");
    printf("문자를 F나 f를 입력하면 섭씨로,\n");
    printf("문자를 C나 c를 입력하면 화씨로 변환합니다.\n\n");
    printf("문자 입력 >> : ");
    scanf("%c", &cha);
    printf("온도 입력 >> ");
    scanf("%lf", &temperature);

    if (cha == 'F' || cha == 'f') {
        celsius = (temperature - 32) * 5.0 / 9.0;
        printf("\n화씨온도 %.2f는 섭씨온도로 %.2f입니다.\n", temperature, celsius);
    }
    else if (cha == 'C' || cha == 'c') {
        fahrenheit = (temperature * 9.0 / 5.0) + 32;
        printf("\n섭씨온도 %.2f는 화씨온도로 %.2f입니다.\n", temperature, fahrenheit);
    }
    else {
        printf("F, f, C, c 중 하나를 입력하세요.\n");
    }

    return 0;
}
