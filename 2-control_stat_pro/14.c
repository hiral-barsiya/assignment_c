//wap to find the largest of three number .

#include <stdio.h>

void main() 
{
    int x, y, z, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z)
        max = x;
    else if (y >= x && y >= z)
        max = y;
    else
        max = z;

    printf("\n The largest number is: %d", max);
}
