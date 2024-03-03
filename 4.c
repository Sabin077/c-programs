#include <stdio.h>

int main() {
    char ch;

    /* Input a character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Character is an ALPHABET.\n");

        if(ch >= 'a' && ch <= 'z') {
            printf("Character is lowercase.\n");
        }
        else {
            printf("Character is uppercase.\n");
        }
    }
    else {
        printf("Character is NOT ALPHABET.\n");
    }

    return 0;
}