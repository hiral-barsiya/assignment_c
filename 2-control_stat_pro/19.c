// program 19-Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer.


#include <stdio.h>

void main() 
{
    int ID;
    char name[50];
    float units, Amount = 0.0, surcharge = 0.0;

    printf("Enter Customer ID: ");
    scanf("%d", &ID);
    printf("Enter Customer Name: ");
    scanf("%s", &name);
    printf("Enter Units Consumed: ");
    scanf("%f", &units);

    if (units < 350) 
    {
        Amount = units * 1.20;
    } 
    else if (units >= 350 && units < 600) 
    {
        Amount = units * 1.50;
    } 
    else if (units >= 600 && units < 800) 
    {
        Amount = units * 1.80;
    } 
    else 
    {
        Amount = units * 2.00;
    }

    if (Amount > 800) 
    {
        surcharge = Amount * 0.18;
        Amount += surcharge;
    }

    if (Amount < 256) 
    {
        Amount = 256;
    }

    printf("\nElectricity Bill\n");
    printf("\n  Customer ID      : %d", ID);
    printf("\n  Customer Name    : %s", name);
    printf("\n  Units Consumed   : %.2f", units);
    printf("\n Total Bill Amount : Rs. %.2f", Amount);

}