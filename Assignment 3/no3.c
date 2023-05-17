#include <stdio.h>

int main ()
{
    float n, i = 1, sum = 0;
    float product = 1,result = 1;
    printf ("Enter a number: ");
    scanf ("%f", &n);

    while ( i <= n)
    {
        product = product * i;
        result = i / product;
        sum = sum + result;
        i++;
    }
    printf ("Sum = %f", sum);

    return 0;
}
