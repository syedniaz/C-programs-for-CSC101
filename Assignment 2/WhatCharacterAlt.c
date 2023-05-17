#include <stdio.h>

int main () {

    printf ("Enter a single character : ");
    char character;
    scanf ("%c", &character);

    if ( character >= 'A' && character <= 'Z' ) {
        printf ("It is a capital letter");
    } else if ( character >= 'a' && character <= 'z' ) {
        printf ("It is a small letter");
    } else if ( character >= '0' && character <= '9' ) {
        printf ("It is a number");
    } else {
        printf ("It is a special character");
    }

    return 0;
}

