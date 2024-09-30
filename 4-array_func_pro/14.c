// Perform 2D matrix array

#include <stdio.h>

#define rows 3
#define cols 3

void main()
 {
    int m1[rows][cols] =
     {
        {12, 12, 13},
        {41, 15, 61},
        {17, 18, 19}
    };

    int m2[rows][cols] =
     {
        {19, 18, 17},
        {61, 51, 14},
        {31, 22, 12}
    };

    int ans[rows][cols];

    int i, j;

    
    for ( i = 0; i < rows; i++)
    {
        for ( j = 0; j < cols; j++)
         {
            ans[i][j] = m1[i][j] + m2[i][j];
        }
    }

    
    printf("Resultant Matrix after Addition:\n");

    for ( i = 0; i < rows; i++) {

        for ( j = 0; j < cols; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }


}