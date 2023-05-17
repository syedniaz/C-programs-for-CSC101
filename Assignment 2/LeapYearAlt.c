#include <stdio.h>

int main () {

    printf ("Enter the year: ");
    int year;
    scanf ("%d", &year);

    if ((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0) ) {
        printf ("\n%d is a leap year", year);
    } else {
        printf ("\n%d is not a leap year", year);
    }

    return 0;
}

