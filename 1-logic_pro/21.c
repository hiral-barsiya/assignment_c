// Accept 2 numbers from user and swap 2 numbers with using 3rd variable and
//without using 3rd variable

// swap using 3rd variable
#include<stdio.h>
void main()
{
    int d ,h , swap ,a ,b;
    printf("enter the number of d:");
    scanf("%d",&d);
    printf("enter the number of h:");
    scanf("%d",&h);
    swap=d;
    d=h;
    h=swap;
    printf("\n after swap the number:d=%d",d);
    printf("\n after swap the number:h=%d",h);
//swap without using 3rd variable
printf("\n------swap without using 3rd variable------");

printf("\nenter the number of a:");
scanf("%d",&a);
printf("\nenter the number of b:");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swap the number:a=%d",a);
printf("\n after swap the number:b=%d",b);
}
