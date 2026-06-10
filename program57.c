// reverse array 
#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Reversing the array
    for(i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("Reversed array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}