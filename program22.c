//conv ert binary to decimal
#include <stdio.h>
int main()
{
    int binaryNum[32], decimalNum = 0, base = 1, n;

    printf("Enter a binary number: ");
    scanf("%d", &n);

    for (int i = 0; n > 0; i++)
    {
        binaryNum[i] = n % 10;
        n /= 10;
        decimalNum += binaryNum[i] * base;
        base *= 2;
    }

    printf("Decimal representation: %d", decimalNum);

    return 0;
}