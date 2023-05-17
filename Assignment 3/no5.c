#include <stdio.h>

int main ()
{
    int num, sum = 0;
    printf ("Enter a number to check if it is prime: ");
    scanf ("%d", &num);

    for ( int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if ( sum == num )
    {
        printf ("%d is a perfect number\n", num);
    }
    else
    {
       printf ("%d is not a perfect number\n", num);
    }

    return 0;
}
