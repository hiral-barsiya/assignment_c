// calculate compound interest

#include <stdio.h>
#include <math.h>

int main() {
    double p, r, a;
    int t, y;

    printf("Enter the principal amount: ");
    scanf("%lf", &p);

    printf("Enter the annual interest rate : ");
    scanf("%lf", &r);
    r /= 100;

    printf("Enter the value of times interest is per year: ");
    scanf("%d", &t);

    printf("Enter the value of years: ");
    scanf("%d", &y);

    a = p * pow((1 + r / t), (t * y));
    
    printf("The amount is: %.2lf\n", a);

}