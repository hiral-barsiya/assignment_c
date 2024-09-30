// WAP Find out length of string without using inbuilt function


#include <stdio.h>

int length(char str[]) 
{
    int length = 0;
    
    while (str[length] != '\0') 
    {
        length++;
    }
    
    return length;
}

void main() 
{
    char str[] = " Hiral_barsiya ";
    
    int len = length(str);
    
    printf("The length of the string is: %d\n", len);
    

}