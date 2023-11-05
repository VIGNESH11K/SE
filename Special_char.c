#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character); // Note the space before %c to consume any leading whitespace.

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
            character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
            printf("%c is a vowel.\n", character);
        } else {
            printf("%c is a consonant.\n", character);
        }
    } else {
        printf("%c is a special character or a digit.\n", character);
    }

    return 0;
}
