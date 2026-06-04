#include <stdio.h>
int main()
{
    int n, i, t1 = 0, t2 = 1, nextTerm, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        sum += t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("Sum of first %d terms of Fibonacci Series: %d", n, sum);

    return 0;
}