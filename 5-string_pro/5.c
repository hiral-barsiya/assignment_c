//Write a program in C to compare two strings without using string library functions.


#include <stdio.h> 

void main() 
{  

    char s1[100], s2[100];  
    
    int i = 0;  

    printf("Enter the first string: ");
    scanf("%s", s1);

    printf("Enter the second string: ");
    scanf("%s", s2);

    
    if (s1[i] == s2[i] && s1[i] != '\0') 
    {
        i++;
        printf(" strings are the same.\n");
    } 
    else
    {
        printf(" strings are the not same.\n");
    }
}