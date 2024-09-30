//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)


#include <stdio.h>

void main() 
{
    int n, max = 0, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) 
     {
        r = n % 10; 
        if (r > max) 
        {
            max = r; 
        }
        n = n / 10; 
    }

    printf("Max number is %d\n", max);

}