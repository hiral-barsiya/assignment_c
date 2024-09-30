//wap to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
void main()
{
int d,h; 
printf("\nenter the value of d:");
scanf("%d",&d);
printf("\nenter the value of h:");
scanf("%d",&h);

d=d*h;
h=d/h;
d=d/h;

printf("\n after swap the value:d=%d",d);
printf("\n after swap the value:h=%d",h);
}