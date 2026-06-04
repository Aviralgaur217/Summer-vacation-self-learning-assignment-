//find product of digits of a number
#include <stdio.h>
int main()
{
    int n, product = 1, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        product *= remainder;
        n /= 10;
    }

    printf("Product of digits = %d", product);

    return 0;
}