// accept 5 expense from user and find average of expense 

#include <stdio.h>

void main() {
    int n= 5;
    float expenses[n];
    float total = 0;
    float average;

    printf("Enter %d expenses:\n", n);

    // Get expenses using array
    for (int i = 0; i < n; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        total += expenses[i];
    }

    average = total /n;

    printf("\nTotal expenses: %.2f\n", total);
    printf("Average expense: %.2f\n", average);
}
