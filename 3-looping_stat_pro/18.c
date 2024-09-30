//.Write a C Program to Print the Multiplication Table of N
//i. E.g. 5 * 1 = 5
//ii. 5 * 2 = 10
//1. .
//2. .
//iii. 5 * 10 = 50

#include <stdio.h>

void main() 
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf(" Table of %d:\n", n);
    
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

}
