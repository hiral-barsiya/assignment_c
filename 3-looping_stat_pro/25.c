//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>

void main() 
{
    int n, ans = 0, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) 
    {
        ans += i * i;  
    }

    printf("The ans of the series (1*1) + (2*2) + ... + (%d*%d) is: %d\n", n, n, ans);

    
}