//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)


#include <stdio.h>

void main() 
{
    int number, first_digit, last_digit, sum;

    printf("Enter a number: ");
    scanf("%d", &number);

    last_digit = number % 10;

    first_digit = number;
    while (first_digit >= 10) 
    {
        first_digit/= 10;  
    }

     sum = first_digit + last_digit;

    printf("Sum of the first and last digit: %d\n", -sum);

}