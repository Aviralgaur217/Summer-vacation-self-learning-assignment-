#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j;
    int sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal sum
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }

    printf("Sum of main diagonal = %d", sum);

    return 0;
}