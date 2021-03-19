#include <stdio.h>
int main()
{
    int num1 = 10;
    int num2 = 12;

    int resalt1, resalt2, resalt3, resalt4;

    resalt1 = (num1 == 10 && num1 <= 9);
    // && : A와 B 모두 '참'이면 연산결과로 '참'을 반환(논리 AND)
    resalt2 = (12 >= num2 || num1 != num2);
    // || : A와 B 둘 중 하나라도 '참'이면 연산결과로 '참'을 반환(논리 OR)
    resalt3 = !(num1 > num2);
    // ! : A가 '참'이면 '거짓', A가 '거짓'이면 '참'을 반환(논리 NOT)
    resalt4 = !num2;

    printf("resalt1 : %d, resalt2 ; %d, resalt3 : %d, resalt4 : %d\n",
           resalt1, resalt2, resalt3, resalt4);

    return 0;
}
