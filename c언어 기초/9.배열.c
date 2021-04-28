#include <stdio.h>
int main()
{
    int nArr[5];
    int i, sum = 0;
    nArr[0] = 10, nArr[1] = 20, nArr[2] = 30, nArr[3] = 40, nArr[4] = 50;
    for (i = 0; i < 5; i++)
    {
        sum += nArr[i];
    }
    printf("배열 요소에 저장된 값의 합 : %d\n", sum);
    return 0;
}