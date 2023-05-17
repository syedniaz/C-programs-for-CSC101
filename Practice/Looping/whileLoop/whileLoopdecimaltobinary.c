#include <stdio.h>

int main ()
{

    int remainder, x;
    long long int binRev = 9;

    printf ("Enter decimal number : ");
    scanf ("%d", &x);

    while ( x > 0)
    {
        remainder = x % 2;
        x = x / 2;
        binRev = binRev * 10 + remainder;
    }


    int digit;
    long long int binary=0;
    while (binRev > 9)
    {
        digit = binRev % 10;
        binary = binary * 10 + digit;
        binRev = binRev / 10;
    }

    printf ("Binary = %lld", binary);

    return 0;
}
