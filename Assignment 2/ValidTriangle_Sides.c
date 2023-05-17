#include <stdio.h>

int main () {

    printf ("Enter the length of first side of triangle : ");
    float side1;
    scanf ("%f", &side1);

    printf ("Enter the length of second side of triangle : ");
    float side2;
    scanf ("%f", &side2);

    printf ("Enter the length of third side of triangle : ");
    float side3;
    scanf ("%f", &side3);

if ( side1 > 0 && side2 > 0 && side3 > 0 ) {

    if ( (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1) ){
        printf ("\nThese lengths do form a triangle");
    } else {
        printf ("\nThese lengths do not form a triangle");
    }

    } else {
        printf ("\nLength cannot be zero or negative");
    }

    return 0;
}
