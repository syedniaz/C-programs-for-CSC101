#include <stdio.h>

int main ()
{
    int count = 0, n;

    printf ("Enter a number: ");
    scanf ("%d", &n);

    for ( int i = 2; n > i; i++ )
    {
        if (n % i == 0)
        {
            count = 1;
            break;
        }
    }
    if ( n == 1)
    {
        printf("%d is neither prime nor composite", n);
    }
    else if ( n!= 1)
    {
        if ( count == 0)
        {
            printf("%d is a prime number", n);
        }
        else
        {
            printf("%d is not a prime number", n);
        }
    }

    return 0;
}
