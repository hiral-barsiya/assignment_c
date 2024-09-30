//Write a program in C to extract a substring from a given string


#include <stdio.h>

void main() {
    char s1[100], s2[100];
    int pos, l, c = 0;//l=length,c=count,pos=position


    printf("enter the string : ");
    fgets(s1, sizeof s1, stdin); 

    printf("enter the position to start extraction :");
    scanf("%d", &pos); 

    printf("enter the length of substring :");
    scanf("%d", &l); 

    while (c < l) {
        s2[c] = s1[pos + c - 1]; 
        c++;
    }
    s2[c] = '\0';

    printf("The substring retrieved from the string is : \" %s\" \n\n", s2);
	
}
