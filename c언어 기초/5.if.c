#include <stdio.h>
int main()
{
    int nAge = 0;
    printf("나이를 입력하세요. : ");
    scanf("%d", &nAge);
    // if문 시작
    if (nAge >= 20)
        // 조건식을 만족한 경우에만 실행하는 구문
        printf("당신의 나이는 %d세 입니다.\n", nAge); // if문 끝
    printf("프로그램 끝!!!\n");
    return 0;
}  