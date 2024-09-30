// wap to check if the given year is leap year or not

#include <stdio.h>

void main() 
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
    {
        printf("This is a leap year.", year);
    } 
    else 
    {
        printf("This is not a leap year.", year);
    }
}