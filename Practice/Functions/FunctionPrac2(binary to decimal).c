#include <stdio.h>

long long int Decimal (long long int x)
{
    long long int result = 0, remainder = 0, power;
    int i = 0, multiply = 1, term = 0;
    while (x > 0)
    {
        remainder = x % 10;
        multiply = multiply * 2;
        if (term == 0)
        {
            power = remainder * 1;
        }
        else
        {
            power = remainder = remainder * multiply;
        }
        term++;
        result = result + power;
        x = x / 10;
    }
    return result;
}

int main ()
{
    long long int x;
    printf ("Enter binary number: ");
    scanf ("%lld", &x);

    printf ("Decimal = %lld", Decimal(x));

    return 0;
}
