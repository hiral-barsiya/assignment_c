// accept 5 employees name and salary and count average and total salary 

#include<stdio.h>
void main()
{
   float employee_1_sal,employee_2_sal,employee_3_sal,employee_4_sal,employee_5_sal,total_sal,average;
    char employee_1_nm,employee_2_nm,employee_3_nm,employee_4_nm,employee_5_nm;

    printf("\nenter first employee name:");
    scanf("%s",&employee_1_nm);
    printf("\nenter first employee salary");
    scanf("%f",&employee_1_sal);

    printf("\nenter second employee name:");
    scanf("%s",&employee_2_nm);
    printf("\nenter second employee salary");
    scanf("%f",&employee_2_sal);

    printf("\nenter third employee name:");
    scanf("%s",&employee_3_nm);
    printf("\nenter third employee salary");
    scanf("%f",&employee_3_sal);

    printf("\nenter forth employee name:");
    scanf("%s",&employee_4_nm);
    printf("\nenter forth employee salary");
    scanf("%f",&employee_4_sal);

    printf("\nenter fifth employee name:");
    scanf("%s",&employee_5_nm);
    printf("\nenter fifth employee salary");
    scanf("%f",&employee_5_sal);

    total_sal=employee_1_sal+employee_2_sal+employee_3_sal+employee_4_sal+employee_5_sal;
    printf("\nthis is total salary of employees :%f",total_sal);
    average=total_sal/5;
    printf("\naverage salary of employees:%f",average);

}