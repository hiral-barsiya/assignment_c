// calculate person's insurance premium based on salary

#include<stdio.h>
void main()
{
    float sal, ins, ins_Premium;

    printf("Enter the salary: ");
    scanf("%f", &sal);
    printf("Enter the insurance : ");
    scanf("%f", &ins);

    ins=ins/100;

    ins_Premium = sal * ins;
    
    printf("The insurance premium is: %.2f\n", ins_Premium);


}
