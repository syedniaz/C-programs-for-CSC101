#include <stdio.h>

void ShiftRight (int *a, int *b, int *c)
{
    int d;
    d = *a; //d = x
    *a = *c; //a = z
    *c = *b; // z = y
    *b = d; // y = d
    //printf ("After swapping x = %d, y = %d, z = %d\n", *a, *b, *c);
}

int main ()
{
    int x,y,z;
    printf ("Enter value of x: ");
    scanf ("%d", &x);

    printf ("Enter value of y: ");
    scanf ("%d", &y);

    printf ("Enter value of z: ");
    scanf ("%d", &z);

    printf ("Before swapping x = %d, y = %d, z = %d\n", x, y, z);

    ShiftRight (&x, &y, &z);

    printf ("After swapping x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
