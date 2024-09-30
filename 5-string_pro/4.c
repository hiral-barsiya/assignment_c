// Write a program in C to count the total number of words in a string.


#include<stdio.h>
#include<string.h>
 
void main() 
{
    char str[100];
    int len;
    
    printf("\n Enter the String : ");
    scanf("%s",str);
    
    len = strlen(str);
    
    printf("\n Length of the given string is %d:", len);
}