//Accept 3 numbers from user using while loop and check each numbers palindrome

#include <stdio.h>

void main() 
{
    int i = 1;
    while (i <= 3) 
    {
        int n, reverse = 0, r, original;

        printf("Enter number %d: ", i);
        scanf("%d", &n);
        original = n;

        while (n != 0) 
        {
            r = n % 10;
            reverse = reverse * 10 + r;
            n /= 10;
        }

        if (original == reverse)
            printf("%d is a palindrome.\n", original);
        else
            printf("%d is not a palindrome.\n", original);

        i++;
    }
}