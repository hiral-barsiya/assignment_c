// WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include <stdio.h>

#define SIZE 5

void  main() {
    int n[SIZE];

    
    printf("Enter 5 number:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &n[i]);
    }


    printf("Numbers in reverse order:\n");
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", n[i]);
    }
    printf("\n");


}