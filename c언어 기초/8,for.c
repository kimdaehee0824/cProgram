#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 5; i++) //for에서는 무조건 ;;; 괄호 안에 있어야 함!!
    {
        printf("%d for문 내부 실행문\n", i);
    }
    printf("프로그램 종료\n");
    return 0;
}