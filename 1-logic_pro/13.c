//Find character value from ascii

#include<stdio.h>
void main()
{
    char ch;
    int num;
    printf("Enter ascii value:");
    scanf("%d",&num);
    ch = (char)num;
    printf("This is character from ascii:%c",ch);
}