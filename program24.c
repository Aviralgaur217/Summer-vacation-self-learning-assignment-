//find x^n witout pow()
#include <stdio.h>
int main()
{
    double x, result = 1.0;
    int n;

    printf("Enter a number (x): ");
    scanf("%lf", &x);

    printf("Enter an integer (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        result *= x;

    printf("%.2lf^%d = %.2lf", x, n, result);

    return 0;
}
