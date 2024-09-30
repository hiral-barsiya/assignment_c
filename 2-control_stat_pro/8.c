//wap to accept the height of a person in centimeters and categorize the person according to their height

#include <stdio.h>

void main() 
{
    float height;

    printf("Enter your height in cm: ");
    scanf("%f", &height);

    if (height < 150.0) 
    {
        printf("\nYou are  in short categorized");
    } 
    else if (height >= 150.0 && height <= 170.0) 
    {
        printf("\nYou are in Average heightc categorized") ;
    } 
    else if (height > 170.0 && height <= 190.0) 
    {
        printf("\nYou are in Tall categorized");
    } 
    else 
    {
        printf("\nYou are in Very tall categorized");
    }
}