//find the character is vowel or not

#include <stdio.h>
 

void main()
{
    char c;
     printf("Enter character value:");
     scanf("%c",&c);

    if (c == 'a' || c == 'A' || c == 'e' || c == 'E'
        || c == 'i' || c == 'I' || c == 'o' || c == 'O'
        || c == 'u' || c == 'U') 
    {
 
        printf("\nThe character %c is a vowel", c);
    }
    else 
    {
        printf("\n The character %c is a not vowel", c);
    }
}
