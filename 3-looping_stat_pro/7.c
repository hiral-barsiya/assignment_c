// Wap to print numbers in reverse order e.g.:number=64728--->reverse 82746

#include <stdio.h>

void main() {

    int n,  r;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n>0)
     {
        r = n % 10;
        printf("%d",r);
        n /= 10;
    }


    
}
