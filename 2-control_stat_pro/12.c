//wap to find maximum number among 3 numbers using ternary operator

#include <stdio.h>

void main() 
{
    int x, y, z, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);

    printf("\n The maximum number is: %d", max);

}