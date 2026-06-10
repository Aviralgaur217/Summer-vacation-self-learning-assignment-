// WAP to perform Linear Search in an array

#include <stdio.h>

int main()
{
    int a[100], n, i, item, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &item);

    for(i = 0; i < n; i++)
    {
        if(a[i] == item)
        {
            found = 1;
            printf("Element found at position %d", i + 1);
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}