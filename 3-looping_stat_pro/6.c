 //Wap to print Fibonacci series up to given numbers

#include <stdio.h>

void main()
 {
    int n, a = 0, b = 1, c,i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
        
    }


}
