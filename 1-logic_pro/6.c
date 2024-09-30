//find area of triangle formula:a=1/2*b*h

#include<stdio.h>
void main()
{
    int b,h,area;
    printf("Enter base number:");
    scanf("%d",&b);

    printf("Enter height number:");
    scanf("%d",&h);

    area=0.5*b*h;

    printf("area of triangle is: %d",area);
}
