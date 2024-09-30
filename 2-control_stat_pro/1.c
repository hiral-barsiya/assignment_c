// write a c program to accept two integers and check whether they are equal or not 

#include <stdio.h>

void main() 
{
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    if (n1 == n2) 
    {
        printf("\n numbers are equal.");
    } 
    
    else 
    {
        printf("\n numbers are not equal.");
    }


}