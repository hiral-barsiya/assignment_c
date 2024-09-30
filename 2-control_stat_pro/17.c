//write a c program to check whether a triangle can be formed with the given values for the angles.

#include <stdio.h>

void main() 
{
    int a1, a2, a3;

    printf("Enter first angle: ");
    scanf("%d", &a1);

    printf("Enter second angle: ");
    scanf("%d", &a2);

    printf("Enter third angle: ");
    scanf("%d", &a3);

    if (a1 + a2 + a3 == 180) {
        printf("A triangle can be formed with these angles.\n");
    } else {
        printf("A triangle cannot be formed with these angles.\n");
    }
}
