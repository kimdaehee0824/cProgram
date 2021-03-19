#define _CRT_SECURE_NO_WARNINGS //visaul studio만 필요
#include <stdio.h> //헤더 파일

int main()
{
    int num1, num2;
    int num3;
    printf("정수 one :");
    scanf("%d", &num1);
    printf("\n");

    printf("정수 two :");
    scanf("%d", &num2);
    printf("\n");

    num3 = num1 + num2;
    printf(" %d + %d = %d", num1, num2, num3);

    return 0;
}