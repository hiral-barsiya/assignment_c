// Write a program in C to separate individual characters from a string.


#include <stdio.h>
#include <string.h>

void main() 
{
   char s[90]=" ";
    int l=0;

    printf("Enter a string: ");
    scanf("%s",s);
    while (s[l]!='\0')
    {
        printf("%c ",s[l]);
        l++;
    }
}