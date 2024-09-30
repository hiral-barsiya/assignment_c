//pattern 1:
//1
//10
//101
//1010
//10101
#include <stdio.h>

void main() 
{
    int n = 5,i,j; 

    for ( i = 1; i <= n; i++) 
    {
        for ( j = 1; j <= i; j++) 
        {
            printf("%d ", j % 2); 
        }
        printf("\n");
    }
}
