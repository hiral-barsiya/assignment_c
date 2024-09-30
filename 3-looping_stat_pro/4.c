//Wap to print table up to given numbers

#include <stdio.h>

void main() 
{
    int n,i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n Table of %d:", n);

    for ( i = 1; i <= 10; i++)
    {
        printf("\n %d x %d = %d", n, i, n * i);
    }

}

