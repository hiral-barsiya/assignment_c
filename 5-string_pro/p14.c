// Write a program in C to combine two strings manually


#include <stdio.h>

void concatenateStrings(char str1[], char str2[]) {
    int i, j;

    // Find length of str1
    for (i = 0; str1[i] != '\0'; i++);

    // Concatenate str2 to str1
    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }

    str1[i] = '\0'; // Add null terminator
}

int main() {
    char str1[100];
    char str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Original strings:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    concatenateStrings(str1, str2);

    printf("Combined string: %s\n", str1);

    return 0;
}



