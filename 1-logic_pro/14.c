// find ascii value of given number

#include<stdio.h>
void main()
{
    char num , ascii_value;
    printf("Enter a number:");
    scanf("%c",&num);
    ascii_value =(int)num;
    printf("This is ascii_value from given number:%d",ascii_value);

}