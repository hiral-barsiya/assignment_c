//Calculate sum of 10 numbers using of while loop

#include <stdio.h>

void main() 
{
    int i = 1, n, ans = 0;

    printf("Enter 10 numbers:\n");
    while (i <= 10) 
    {
        printf("Number %d: ", i);
        scanf("%d", &n);
        ans += n; 
        i++;
    }

    printf("\nSum of 10 numbers: %d\n", ans);

}

