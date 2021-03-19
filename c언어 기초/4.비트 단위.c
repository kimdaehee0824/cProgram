#include <stdio.h>
int main()
{
    int num1 = 15; // 00000000 00000000 00000000 00001111
    int num2 = 20; // 00000000 00000000 00000000 00010100
    
    int num3 = num1 & num2; //비트단위로 AND 연산을 한다.
    printf("AND 연산자의 결과 : %d\n", num3);

    //__________

    int num4 = num1 & num2; //비트단위로 OR 연산을 한다.
    printf("OR 연산자의 결과 : %d\n", num4);

    //__________

    int num5 = num1 ^ num2; //비트단위로 XOR 연산을 한다.
    printf("XOR 연산자의 결과 : %d\n", num5);

    //__________

    int num6 = ~num1;       //
    printf("NOT 연산자의 결과 : %d\n", num6);
}