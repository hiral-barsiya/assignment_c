//Program of Armstrong Number in C Using For Loop & While Loop

//using for loop

#include <stdio.h>

void main() {
    int n, r, arm = 0, c;

    printf("Enter an integer: ");
    scanf("%d", &n);
    c = n;

    for (; n > 0; n /= 10) {
        r = n % 10; 
        arm += r * r * r; 
    }

    // Check and output result
    if (c == arm) {
        printf(" Armstrong number.\n");
    } else {
        printf(" not an Armstrong number.\n");
    }

}
