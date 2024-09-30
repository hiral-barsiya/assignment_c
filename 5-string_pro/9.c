//Write a program in C to find the maximum number of characters in a string


#include <stdio.h>

void max(char str[]) 
{
    int count[100]={0};
    int i;
    char maxChar;
    int maxCount = 0;

    for (i = 0; str[i] != '\0'; i++) 
    {
        count[str[i]]++;
    }

    for (i = 0; i < 100; i++) 
    {
        if (count[i] > maxCount) 
        {
            maxCount = count[i];
            maxChar = i;
        }
    }

    printf("Maximum character: %c \n", maxChar);
}

void main() 
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    max(s);

}