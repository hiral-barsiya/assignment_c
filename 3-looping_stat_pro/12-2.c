//using while loop


#include <stdio.h>

void main() {
    int n, r, arm=0,c;

    printf("Enter an integer: ");
    scanf("%d", &n);
    c=n;
    while (n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;

    }
    if (c == arm) {
        printf(" Armstrong number.\n");
    } else {
        printf(" not an Armstrong number.\n");
    }

    
}
