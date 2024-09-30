// Write a program to find out the max number from given array using function


#include <stdio.h>

int maximum(int arr[], int s) 
{
    int max = arr[0];
    for (int i = 1; i < s; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

void main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int max = maximum(arr, n);
    printf("Maximum number: %d\n", max);
}