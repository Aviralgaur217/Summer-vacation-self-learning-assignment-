// WAP to find frequency of an element in an array

#include <stdio.h>

int main()
{
    int a[100], n, i, item, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &item);

    for(i = 0; i < n; i++)
    {
        if(a[i] == item)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", item, count);

    return 0;
}