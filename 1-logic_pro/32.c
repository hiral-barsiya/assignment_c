//accept 2 numbers and find out its sum check it size 


#include <stdio.h>

void main() 
{
    int num1, num2, sum;

    
    printf("Enter the first no.: ");
    scanf("%d", &num1);

    printf("Enter the second no.: ");
    scanf("%d", &num2);

        sum = num1 + num2;

    printf("\nSum is :%d", sum);

    printf("\nSize of the sum is:%d", sizeof(sum));
}
