//wap to convert year into days and days into years


#include <stdio.h>

void main() {
    float years, days, convert_days, convert_years;
    printf("-----year into day-----");
    printf("\nEnter the number of years: ");
    scanf("%f", &years);
    convert_days = years * 365; 
    printf("convert year into day is:%.2f\n", convert_days);

    printf("-----day into year-----");  
    printf("\nEnter the number of days: ");
    scanf("%f", &days);
    convert_years = days / 365.25;
    printf("convert day into year is :%.2f\n", convert_years);


}
