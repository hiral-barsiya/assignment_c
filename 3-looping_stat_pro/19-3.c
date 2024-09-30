//pattern 3:
//        * 
//      * * * 
//    * * * * * 
//  * * * * * * * 
//* * * * * * * * *
#include<stdio.h>

void main()
{

    int a = 1,i,j,k;
    for ( j = 1; j <= 10; j += 2)
    {
        for ( i = 4; i >= a; i--)
        {
            printf("  ");
        }
        a++;

        for ( k = 1; k <= j; k++)
        {
            printf(" *");
        }
        printf("\n");
    }

}