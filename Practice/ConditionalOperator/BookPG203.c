#include <stdio.h>

int main ()
{

//    // 4.24, D)
//
//    int result;
//
//    printf ("Enter a number: ");
//    scanf ("%d", &result);
//
//    result >= 0 ? printf ("The result is positive") : printf ("The result is negative");

    //4.25, A)

    int j, k = 91;

//    //using conditional operator
//    j = k > 90 ? 57 : 12;

    //using if/ else
    if (k > 90)
        j=57;
    else
        j=12;

    printf ("%d", j);


    return 0;
}
