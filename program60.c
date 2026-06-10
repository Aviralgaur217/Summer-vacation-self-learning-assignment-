//move zeroes to end
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

    // Moving zeroes to the end
    j = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }
    while(j < n)
    {
        a[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}