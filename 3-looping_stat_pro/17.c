//Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include <stdio.h>

int main() 
{
    int i = 0, n, even=0, odd = 0;  

    while (i < 5) 
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n);

        if (n % 2 == 0) 
        {
            even++;
        } else 
        {
            odd++;
        }

        i++;
    }

    printf(" even numbers: %d\n", even);
    printf(" odd numbers: %d\n", odd);

}