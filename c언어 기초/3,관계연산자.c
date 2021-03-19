#include <stdio.h>
int main()
{
    int num1 = 10;
    int num2 = 12;

    int resalt1, resalt2, resalt3,
        resalt4, resalt5, resalt6;

    resalt1 = (num1 == 10);
    resalt2 = (num1 <= 9);
    resalt3 = (12 >= num2);
    resalt4 = (num1 != num2);
    resalt5 = (num1 > num2);
    resalt5 = (12 < num2);

    printf("resalt1 : %d, resalt2 ; %d, resalt3 : %d\n"
           "resalt4 : %d, resalt5 : %d, resalt6 : %d\n",
           resalt1, resalt2, resalt3,
           resalt4, resalt5, resalt6);

    return 0;
}
