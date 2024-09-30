// Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>
#include <string.h>

void main() 
{
    char s[100], i;

    printf("Enter a string: ");
    scanf("%s", s);

    printf(" reverse string:\n");
    for ( i = strlen(s) - 1; i >= 0; i--) 
    {
        printf("%c\n", s[i]);
    }
}