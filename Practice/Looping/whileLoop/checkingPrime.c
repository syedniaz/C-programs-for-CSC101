#include <stdio.h>

int main ()
{
    int count = 0, n, i = 2;

    printf ("Enter a number: ");
    scanf ("%d", &n);

    while ( n > i )
    {
        if (n % i == 0)
        {
            count = 1;
            break;
        }
        i++;
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
