// Write a program in C to count the total number of alphabets, digits and special characters in a string.


#include <stdio.h>

void countChar(char str[]) 
{
    //a=alphabets, d=digits,sc=special character,s=spaces
    int a = 0, d = 0, sc = 0, s = 0, i;

    for (i = 0; str[i] != '\0'; i++) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            a++;
        } 
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            d++;
        } 
        else if (str[i] == ' ') 
        {
            s++;
        } 
        else 
        {
            sc++;
        }
    }

    printf("alphabets: %d\n", a);
    printf("Digits: %d\n", d);
    printf("Special Characters: %d\n", sc);
    printf("Spaces: %d\n", s);
}

void main() 

{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    countChar(str);
}