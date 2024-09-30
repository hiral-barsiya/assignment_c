//c program to check uppercase or lowercase or digit or special character

#include <stdio.h>

void main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') 
    {
        printf("\n This is an uppercase letter.", c);
    } 
    else if (c >= 'a' && c <= 'z')
    {
        printf("\n This is a lowercase letter.", c);
    } 
    else if (c >= '0' && c <= '9') 
    {
        printf("\n This is a digit.", c);
    }
    else 
    {
        printf("\n This is a special character.", c);
    }
}