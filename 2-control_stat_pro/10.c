//wap to check whether a number is negative ,positive or zero.

#include <stdio.h>

void main() 
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) 
    {
        printf("\n Num is a positive number.", n);
    } 
    else if (n < 0) 
    {
        printf("\n Num is a negative number.", n);
    } 
    else 
    {
        printf("\n Num is zero.", n);
    }
}