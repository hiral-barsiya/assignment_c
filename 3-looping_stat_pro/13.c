//calculate the Factorial of a Given Number using while loop


#include <stdio.h>

void main() 
{
    int number, f = 1;
 
    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        f *= number;  
        number--;             
    }

    printf("Factorial is %d\n", f);

}