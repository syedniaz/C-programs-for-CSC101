#include <stdio.h>

int main () {

    printf ("Enter X coordinate of the point : ");
    int x;
    scanf ("%d", &x);

    printf ("Enter Y coordinate of the point : ");
    int y;
    scanf ("%d", &y);

    if (x == 0 && y != 0) {
        printf ("\nPoint (%d,%d) lies on Y-axis" , x, y);
    }

    if (y == 0 && x!= 0) {
        printf ("\nPoint (%d,%d) lies on X-axis" , x, y );
    }

    if (x == 0 && y == 0) {
        printf ("\nPoint (%d,%d) lies on origin"  , x, y);
    }




    return 0;
}

