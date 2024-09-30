// convert temperature fahrenheit to celsius

#include <stdio.h>

void main()
{
    float fahrenheit, cel;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    cel = (fahrenheit - 32) * 5/9;

    printf(" convert temperature fahrenheit to celsius is:%.2f", cel);

}