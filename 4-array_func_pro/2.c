// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)


#include <stdio.h>

void main() 
{
    int c;
    float n1, n2, ans;

    do 
    {
        printf("\n Menu:");
        printf("\n 1. Addition");
        printf("\n 2. Subtraction");
        printf("\n 3. Multiplication");
        printf("\n 4. Division");
        printf("\n 5. Exit");
        printf("\n Enter your operation (1-5): ");
        scanf("%d", &c);

        if (c == 5) 
        {
            break;
        }


        printf("Enter first number: ");
        scanf("%f", &n1);
        printf("Enter second number: ");
        scanf("%f", &n2);

        switch (c) 
        {
            case 1: 
                ans = n1 + n2;
                printf("answer: %.2f\n", ans);
                break;
            case 2: 
                ans = n1 - n2;
                printf("answer: %.2f\n", ans);
                break;
            case 3: 
                ans = n1 * n2;
                printf("answer: %.2f\n", ans);
                break;
            case 4: 
                if (n2 != 0) 
                {
                    ans = n1 / n2;
                    printf("\n answer: %.2f", ans);
                } else 
                {
                    printf("\n Error: Division by zero is not allowed.");
                }
                break;
        }
    } while (c != 5);

    printf("\n Exiting...\n");
}