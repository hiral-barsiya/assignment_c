//Write a program make a summation of given number (E.g., 1523 Ans: -11)


#include <stdio.h>

void main() 
{
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n < 0 ? -n : n;

    while (temp > 0) 
    {
        digit = temp % 10;  
        sum += digit;              
        temp /= 10;         
    }

    printf("\n Summation of number: %d", -sum);

}