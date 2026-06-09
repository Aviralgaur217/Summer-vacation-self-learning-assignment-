// print armstronng in a rangge
#include <stdio.h>
#include <math.h>
int main()
{
    int low, high;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: ", low, high);

    for (int num = low; num <= high; num++)
    {
        int originalNum = num, remainder, n = 0, result = 0;

        // store the number of digits of num in n
        for (originalNum = num; originalNum != 0; ++n)
            originalNum /= 10;

        originalNum = num;

        // calculate the sum of the nth power of each digit
        for (originalNum = num; originalNum != 0; originalNum /= 10)
        {
            remainder = originalNum % 10;
            result += pow(remainder, n);
        }

        // check if num is equal to the sum of the nth power of its digits
        if (result == num)
            printf("%d ", num);
    }

    return 0;
}