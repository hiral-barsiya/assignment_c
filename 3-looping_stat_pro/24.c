//1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>

void main() 
{
    int n, ans = 0, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        ans += i;  
    }

    printf("The ans of the series 1 + 2 + ... + %d is: %d\n", n,ans);
}