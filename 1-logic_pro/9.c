//find circumference of triangle formula:triangle=a+b+c
 
#include<stdio.h>
void main()
{
    int a,b,c,triangle;
    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    printf("Enter c:");
    scanf("%d",&c);

    triangle=a+b+c;

    printf("circumference of triangle: %d",triangle);
}