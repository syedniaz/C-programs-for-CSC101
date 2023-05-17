#include <stdio.h>

int main ()
{
    int a = 5, b = 10;
    int *ptra, *ptrb;
    ptra = &a;
    ptrb = &b;
    *ptra = *ptra + *ptrb;
    *ptrb = *ptra * *ptrb;
    *ptra = *ptra - *ptrb;
    printf ("%d", *ptra);


    return 0;
}
