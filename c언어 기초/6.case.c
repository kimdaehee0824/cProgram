#include <stdio.h>
int main()
{
    char cOperator = 0;
    int x = 0, y = 0, nResult = 0;
    // 사용자로부터 산술식을 입력받는다.
    scanf("%d %c %d", &x, &cOperator, &y); // 숫자와 연산자 사이에 스페이스 한 칸 필요!
                                           //연산자가 무엇인지 선택한다.
    switch (cOperator)
    {
    case '+':
        nResult = x + y;
        // 다음 행으로 넘어가지 않고 switch-case 블록을 벗어난다.
        break;
    case '-':
        nResult = x - y;
        break;
    case '*':
        nResult = x * y;
        break;
    case '/':
        nResult = x / y;
        break;
        // 앞의 네가지 경우에 해당하지 않는 나머지 경우 default:
        printf("ERROR: 알수 없는 산술 연산입니다.");
    }
    printf("Result: %d\n", nResult);
    return 0;
}