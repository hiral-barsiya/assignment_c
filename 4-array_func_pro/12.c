//WAP to accept 5 students name and store it in array

#include <stdio.h>

void main() {
    
    char studNames[5][100];


    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++)
     {
        printf("Student %d: ", i + 1);
        scanf("%s", studNames[i]); 
    }


    printf("\n Student Names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, studNames[i]);
    }

    
}