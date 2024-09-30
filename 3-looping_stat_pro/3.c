//wap to take 10 no. Input from user find out below values
// How many even numbers are there
// How many odd numbers are there
// Sum of even numbers
// Sum of odd numbers 

#include <stdio.h>

void main() {
    int numbers[10];
    int evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;


    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
            evenSum += numbers[i];
        } else {
            oddCount++;
            oddSum += numbers[i];
        }
    }


    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

}
