//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa

#include <stdio.h>
#include <ctype.h>

void main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Modified sentence: ");
    for (int i = 0; sentence[i]; i++) {
        if (islower(sentence[i])) {
            printf("%c", toupper(sentence[i]));
        } else if (isupper(sentence[i])) {
            printf("%c", tolower(sentence[i]));
        } else {
            printf("%c", sentence[i]);
        }
    }

}
