//Write a program in C to count the total number of vowel or constant in a string.

#include <stdio.h>

void countVowelsConsonants(char str[]) 
{
    //c=constant,v=vowel

    int v = 0, c = 0, i;

    for (i = 0; str[i] != '\0'; i++) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
                {
                v++;
            } else 
            {
                c++;
            }
        }
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
}

void main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    countVowelsConsonants(str);

}