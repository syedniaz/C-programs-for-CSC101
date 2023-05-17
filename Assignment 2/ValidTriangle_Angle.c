#include <stdio.h>

int main () {

    printf ("Enter the first angle of triangle : ");
    float angle1;
    scanf ("%f", &angle1);

    printf ("Enter the second angle of triangle : ");
    float angle2;
    scanf ("%f", &angle2);

    printf ("Enter the third angle of triangle : ");
    float angle3;
    scanf ("%f", &angle3);

    if ( angle1 > 0 && angle2 > 0 && angle3 > 0 ) {
        float sum = angle1 + angle2 + angle3;
        if ( sum == 180.000) {
            printf ("\nSum adds upto 180.Triangle is valid.");
        } else {
            printf ("\nSum does not add upto 180.Triangle is invalid.");
        }
    } else {
        printf ("\nAngles cannot be negative");
    }

    return 0;
}
