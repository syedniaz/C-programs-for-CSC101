#include <stdio.h>

int main () {

    printf ("Enter an integer : ");
    int num;
    scanf ("%d", &num);

    if ( num < 0 ) {
        num = num * -1;
        printf ("\nAbsolute value of the integer is %d", num );
    } else {
        printf ("\nAbsolute value of the integer is %d", num );
    }


    return 0;
}
