
// WAP to take two Array input from user and sort them in ascending or descending order as per user’s c

#include <stdio.h>

void main() 
{
    int n1, n2, c, i, j, temp,a1[n1], a2[n2];


    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) 
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) 
    {
        scanf("%d", &a2[i]);
    }

    printf("Sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice: ");
    scanf("%d", &c);

    if (c == 1) 
    {
        for (i = 0; i < n1 - 1; i++) 
        {
            for (j = i + 1; j < n1; j++) 
            {
                if (a1[i] > a1[j]) 
                {
                    temp = a1[i];
                    a1[i] = a1[j];
                    a1[j] = temp;
                }
            }
        }
        for (i = 0; i < n2 - 1; i++) 
        {
            for (j = i + 1; j < n2; j++) 
            {
                if (a2[i] > a2[j]) 
                {
                    temp = a2[i];
                    a2[i] = a2[j];
                    a2[j] = temp;
                }
            }
        }
    } else if (c == 2) 
    {
        for (i = 0; i < n1 - 1; i++) 
        {
            for (j = i + 1; j < n1; j++) 
            {
                if (a1[i] < a1[j]) 
                {
                    temp = a1[i];
                    a1[i] = a1[j];
                    a1[j] = temp;
                }
            }
        }
        for (i = 0; i < n2 - 1; i++) 
        {
            for (j = i + 1; j < n2; j++) 
            {
                if (a2[i] < a2[j]) 
                {
                    temp = a2[i];
                    a2[i] = a2[j];
                    a2[j] = temp;
                }
            }
        }
    } else 
    {
        printf("Invalid choice.\n");

    }

    printf("Sorted first array: ");
    for (i = 0; i < n1; i++) 
    {
        printf("%d ", a1[i]);
    }
    printf("\n");
    printf("Sorted second array: ");
    for (i = 0; i < n2; i++) 
    {
        printf("%d ", a2[i]);
    }
    printf("\n");

}
