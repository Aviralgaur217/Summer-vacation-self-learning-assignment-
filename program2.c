// Print multiplication table of a given number
#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number for table to be printed");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        int result = n*i;
        printf("%d x %d = %d\n",n,i,result);
    }
    return 0;
}
