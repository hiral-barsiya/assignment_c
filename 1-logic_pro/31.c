//convert kilometers into meters


#include <stdio.h>

void main() {
    float km, meters;


    printf("Enter distance in kilometers: ");
    scanf("%f", &km);

    meters = km * 1000;

    printf("convert kilometers into meters is:%.2f\n", meters);


}
