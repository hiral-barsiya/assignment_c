// WAP to perform Palindrome number using for loop and function

#include <stdio.h>

int isPalindrome(int n) {
    int r, rev = 0, original = n;

    for (; n != 0; n /= 10) {
        r = n % 10;
        rev = rev * 10 + r;
    }

    return (original == rev);
}

void main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("number is a palindrome number.\n", n);
    } else {
        printf("number is not a palindrome number.\n", n);
    }

}