//wap to make simple calculator (operation include addition, subtraction,multiplication,division,modulo) using conditional statement

#include <stdio.h>

int main() {
    char operator;
    double n1, n2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two values: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operator) 
    {
        case '+':
            result = n1 + n2;
            break;
        case '-':
            result = n1 - n2;
            break;
        case '*':
            result = n1 * n2;
            break;
        case '/':
            if (n2 != 0)
                result = n1 / n2;
            else {
                printf(" Division by zero.\n");
                return 1;
            }
            break;
        case '%':
            if ((int)n2 != 0)
                result = (int)n1 % (int)n2;
            else {
                printf(" Division by zero.\n");
                return 1;
            }
            break;
        default:
            printf(" Operator is not correct.\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
