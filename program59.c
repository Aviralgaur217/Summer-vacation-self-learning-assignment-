/// rotate array right 
#include <stdio.h>
#include <string.h>

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

    // Rotating array to the right by 1 position
    temp = a[n-1];
    for(i = n-1; i > 0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = temp;

    printf("Array after rotating right is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}