//check number is positive or negative

#include <stdio.h>

void main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) 
    {
        printf("\n number is a positive number.", number);
    } 
    else if (number < 0) 
    {
        printf("\n number is a negative number.", number);
    } 
    else 
    {
        printf("\n number is not positive or negative", number);
    }
}