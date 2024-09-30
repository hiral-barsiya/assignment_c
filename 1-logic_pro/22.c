//calculate compound interest (compound interest formula:)
//a. formula to calculate compound interest annually is given by :
// amount = p(1+r/100)t 
//b. compound interest =amount -p 

#include<stdio.h>
#include<math.h>
void main()
{
    float interest,amount,principle,rate,time;
    
    printf("enter the value of principle:");
    scanf("%f",&principle);

    printf("enter the value of rate:");
    scanf("%f",&rate);

    printf("enter the value of time:");
    scanf("%f",&time);

    amount=principle*pow((1+rate/100),(time));
    printf("\namount is:%.2f",amount);

    interest=amount - principle;
    printf("\ncompound interest:%.2f",interest);

}