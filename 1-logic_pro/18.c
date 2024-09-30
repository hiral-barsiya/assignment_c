// calculator person's annual salary

#include<stdio.h>
void main()
{
    float monthly_salary,annual_salary;
    printf("enter monthly salary :");
    scanf("%f",&monthly_salary);

    annual_salary=monthly_salary*12;

    printf("annual salary is:%.2f",annual_salary);

}