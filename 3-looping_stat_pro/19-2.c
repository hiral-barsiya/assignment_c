//pattern 2:

//A   
//B C   
//D E F   
//G H I J 
//K L M N O

#include <stdio.h>

void main() 
{
    int i,j; 
    char a='A';

    for ( i = 1; i <= 5; i++) 
    {
        for ( j = 1; j <= i; j++) 
        {
            printf("%c ", a);
            a++; 
        }
        printf("\n");
    }
}