#include <stdio.h>

int main ()
{

    long long int x;
    int remainder = 0;
    int bin = 0;
    int n = 0;

    printf ("Enter binary number : ");
    scanf ("%lld", &x);

    while (x != 0)
    {
        remainder = x % 10;
        bin = bin + (remainder * (2 ^ n)) ;
        x = x / 10;
        n++;
    }

    printf ("%d", bin);

    return 0;
}

