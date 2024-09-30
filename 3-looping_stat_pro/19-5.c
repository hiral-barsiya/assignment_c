// pattern 5:

// A            
// A B           
// A B C            
// A B C D          
// A B C D E 

#include <stdio.h>

void main() 
{
    int rows = 5, j, i; 
    char ch = 'A'; 


    for ( i = 0; i < rows; i++) 
    {
        for ( j = 0; j <= i; j++) 
        {
            printf("%c ", ch);
            ch++; 
        }
        printf("\n");
    }


}
