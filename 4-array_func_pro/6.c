// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array


#include <stdio.h>

#define row 3 
#define col 3

void add(int A[row][col], int B[row][col], int result[row][col]) 
{
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void sub(int A[row][col], int B[row][col], int result[row][col]) 
{
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void mul(int A[row][col], int B[row][col], int result[row][col]) 
{
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            for (int k = 0; k < col; k++) 
            {
                result[i][j] += A[i][j] * B[k][j];
            }
        }
    }
}

void ans(int matrix[row][col]) 
{
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int A[row][col] = 
    {
        
        {11, 21, 13},  
        {41, 15, 16},
        {71, 18, 19}
    };

    int B[row][col] = 
    {
        {19, 18, 17},
        {62, 15, 14},
        {32, 21, 11}
    };

    int result[row][col];

    printf("Addition of A and B:\n");
    add(A, B, result);
    ans(result);

    printf("\nSubtraction of A and B:\n");
    sub(A, B, result);
    ans(result);

    printf("\nMultiplication of A and B:\n");
    mul(A, B, result);
    ans(result);

}