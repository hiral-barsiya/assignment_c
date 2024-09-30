/*Write a program to make simple calculator (to make addition, subtraction,multiplication,
division and modulo) */
#include <stdio.h>

void main() {
    int num1, num2;
    float result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("\nEnter the second number: ");
    scanf("%d", &num2);

    result = (float)num1 + num2;
    printf("\nResult of addition is %d + %d = %.2f", num1, num2, result);

    result = (float)num1 - num2;
    printf("\nResult of subtraction is %d - %d = %.2f", num1, num2, result);

    result = (float)num1 * num2;
    printf("\nResult of multiplication is %d * %d = %.2f", num1, num2, result);

   
    result = (float)num1 / num2;
    printf("\nResult of division is %d / %d = %.2f", num1, num2, result);
    
    result = num1 % num2;
    printf("\nResult of modulo is %d %% %d = %d", num1, num2, (int)result);

}
