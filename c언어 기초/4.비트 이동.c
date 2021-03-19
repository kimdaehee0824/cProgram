#include <stdio.h>
int main()
{
    int num1 = 15;
    
    int resalt1 = num1 << 1;
    int resalt2 = num1 << 2;
    int resalt3 = num1 << 3;

    printf("한칸 이동 경과 : %d\n", resalt1);
    printf("두칸 이동 경과 : %d\n", resalt2);
    printf("세칸 이동 경과 : %d\n", resalt3);

    int num0 = -16;
    printf("한칸 오른쪽 이동 경과 : %d\n", num0 >> 1);
    printf("두칸 오른쪽 이동 경과 : %d\n", num0 >> 2);
    printf("세칸 오른쪽 이동 경과 : %d\n", num0 >> 3);

    return 0;
}
