// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)


#include <stdio.h>

void main() 
{
    int n, ans = 0, i, j,m = 0;
;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) 
    {
        
        for ( j = 1; j <= i; j++) 
        {
            m += j;
        }

        ans += m;
    }

    printf("The ans of the series (1) + (1+2) + ... + (1+2+...+%d) is: %d\n", n, ans);

}