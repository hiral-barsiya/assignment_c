//accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary.
#include<stdio.h>
void main()
{
   float remain_salary,ins_premium=0.10,loan_installment=0.10,monthly_salary;

   printf("enter a value of monthly salary:");
   scanf("%f",&monthly_salary);

    ins_premium = monthly_salary * 0.10;
    loan_installment = monthly_salary * 0.10;

    remain_salary = monthly_salary - ins_premium - loan_installment;

    printf("Insurance premium is: %.2f\n", ins_premium);
    printf("Loan installment is: %.2f\n", loan_installment);
    printf("Remaining salary is: %.2f\n", remain_salary);



}