// Convert school's name in abbreviated form

#include<stdio.h>

void main() {
  
char name[20], lname[20];
  printf("Enter The school name \n");
  scanf("%s %s", name,lname);
  printf("Abbreviated Name: ");
  printf("%c. %c.\n", name[0],lname[0]);
  

}