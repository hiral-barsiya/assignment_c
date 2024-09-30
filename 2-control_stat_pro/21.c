// Write a c program to input basic salary of an employee and calculates Gross salary according to following:   
//Basic salary <=10000: HRA = 20%,DA = 80%
//Basic salary <=20000: HRA = 25%,DA = 90%
//Basic salary <=20000: HRA = 30%,DA = 95%

#include <stdio.h>

void main() {
    float basic_sal, HRA, DA, gross_sal;

    printf("Enter basic salary: ");
    scanf("%f", &basic_sal);

    if (basic_sal <= 10000) 
    {
        HRA = basic_sal * 0.20;
        DA = basic_sal * 0.80;
    } 
    else if (basic_sal <= 20000) 
    {
        HRA = basic_sal * 0.25;
        DA = basic_sal * 0.90;
    } 
    else 
    {
        HRA = basic_sal * 0.30;
        DA = basic_sal * 0.95;
    }

    gross_sal = basic_sal + HRA + DA;

    printf(" \n Basic Salary: %.2f", basic_sal);
    printf(" \n HRA: %.2f", HRA);
    printf(" \n DA: %.2f", DA);
    printf(" \n Gross Salary: %.2f", gross_sal);

}
