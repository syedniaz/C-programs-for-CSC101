#include <stdio.h>

long long int Binary (long long int x)
{
    long long int binrev = 9;
    int rem;
    while (x > 0)
    {
        rem = x % 2;
        x = x / 2;
        binrev = binrev * 10 + rem;
    }

    int digit;
    long long int binary = 0;
    for (;binrev > 9;)
    {
        digit = binrev % 10;
        binary = binary * 10 + digit;
        binrev = binrev / 10;
    }
    return binary;
}

int main ()
{
    long long int x;
    printf ("Enter decimal number: ");
    scanf ("%lld", &x);

    printf ("Binary number: %lld", Binary(x));

    return 0;
}
