//wap to find number is even or odd using ternary operator

#include <stdio.h>

void main()
{
    int n;

    printf("\nEnter a number:");
    scanf("%d", &n);

    (n % 2 == 0)?(printf(" \n  Even number")):(printf("\n  Odd number"));

}