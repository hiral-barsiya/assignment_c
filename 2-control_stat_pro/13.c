//wap to find minimum number among 3 numbers using ternary operator

#include <stdio.h>

void main() 
{
    int x, y, z, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);

    printf("\n The minimum number is: %d", min);
}
