// pattern 4:

// 1
// 2 3
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

#include <stdio.h>

void main() 
{
    int n = 5,i,j; 
    int a=1;

    for ( i = 1; i <= n; i++) 
    {
        for ( j = 1; j <= i; j++) 
        {
            printf("%d ", a);
            a++; 
        }
        printf("\n");
    }
}