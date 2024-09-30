//c program to read integer and print first  three powers(n^1,n^2,n^3)

#include <stdio.h>

void main() 
{
    int n;

    printf("enter an number: ");
    scanf("%d", &n);

    printf("n^1 = %d\n", n);
    printf("n^2 = %d\n", n * n);
    printf("n^3 = %d\n", n * n * n);
}