// accept the number of students from user. I need to give five apples to each student. How many apples are required?

#include<stdio.h>
void main()
{
    int student,total_app;
    int app=5;
     
     printf("enter number of student:");
     scanf("%d",&student);
     
     total_app = student*app;

     printf("total app required:%d",total_app);

}