// WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include <stdio.h>

void main() {
    
    int numbers[5], i;


    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
     {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    printf("\nNumber\tEven/Odd\n");
    for ( i = 0; i < 5; i++) {
        
        if (numbers[i] % 2 == 0) {
            printf("%d\tEven\n", numbers[i]);
        } else {
            printf("%d\tOdd\n", numbers[i]);
        }
    }

}

