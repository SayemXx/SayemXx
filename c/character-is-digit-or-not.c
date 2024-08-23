#include <stdio.h>
#include <ctype.h>  // For the isdigit() function

int main() {
    char inputChar;

    printf("Enter a character: ");
    scanf("%c", &inputChar);

    if (isdigit(inputChar)) {
        printf("The character '%c' is a digit.\n", inputChar);
    } 
    else {
        printf("The character '%c' is a symble.\n", inputChar);
    }

    return 0;
}
