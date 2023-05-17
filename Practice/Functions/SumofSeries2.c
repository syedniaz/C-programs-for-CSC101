#include <stdio.h>

float factorial (float num1)
{
    int product = 1;

    for (int i =1 ; i <= num1 ; i++)
    {
        product = product * i;
    }
    return product;
}

int main ()
{
    float n;
    float sum = 0;

    printf ("Enter a number ( >= 1 or <= 16): ");
    scanf ("%f", &n);

    for ( int i = 1 ; i <= n ; i++)
    {
        sum = sum + (1/factorial (i));
    }

    printf ("%f", sum);

    return 0;
}
