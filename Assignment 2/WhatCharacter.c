#include <stdio.h>

int main () {

    printf ("Enter a single character : ");
    char character;
    scanf ("%c", &character);

    if ( character >= 65 && character <= 90 ) {
        printf ("It is a capital letter");
    } else if ( character >= 97 && character <= 122 ) {
        printf ("It is a small letter");
    } else if ( character >= 48 && character <= 57 ) {
        printf ("It is a number");
    } else {
        printf ("It is a special character");
    }

    return 0;
}
