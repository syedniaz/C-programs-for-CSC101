#include <stdio.h>

int main () {

    printf ("Enter the age of X : ");
    int age_of_x;
    scanf ("%d", &age_of_x);

    printf ("Enter the age of Y : ");
    int age_of_y;
    scanf ("%d", &age_of_y);

    printf ("Enter the age of Z : ");
    int age_of_z;
    scanf ("%d", &age_of_z);

    if ( age_of_x >= 0 && age_of_y >= 0 && age_of_z >= 0 ) {

    if ( age_of_x < age_of_y && age_of_x < age_of_z ){
        printf ("\nX is the youngest");
    } else if ( age_of_y < age_of_x && age_of_y < age_of_z ){
        printf ("\nY is the youngest");
    } else if ( age_of_z < age_of_x && age_of_z < age_of_y ){
        printf ("\nZ is the youngest");
    } else {
        printf ("\nInconclusive");
    }

    } else {
        printf ("\nAge cannot be negative");
    }

    return 0;
}
