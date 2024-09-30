//Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

void main() {
    int numbers[5];
    long fact;

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Factorials:\n");
    for (int i = 0; i < 5; i++) {
        fact = 1;
        for (int j = 1; j <= numbers[i]; j++) {
            fact *= j;
        }
        printf("%d! = %ld\n", numbers[i], fact);
    }

}



