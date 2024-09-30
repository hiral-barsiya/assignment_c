//wap to find area and circumference of circle

#include<stdio.h>
#include<math.h> 
void main()
{
    int radius;
    float area,cir;
    printf("Enter num of radius:");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    cir=2*3.14*radius;
    printf("The area is =%f",area);
    printf("\nthe circle is=%f",cir);
}