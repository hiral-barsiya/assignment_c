//1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n

#include <stdio.h>

void main() 
{
    int n, i;
    double ans = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++) 
    {
        if (i % 2 == 0) 
        {
            ans -= (double)i / (i + 1);  
        } 
        else 
        {
            ans += (double)i / (i + 1);  
        }
    }

    printf("The ans of the series is: %.6f\n", ans);

}