#include <stdio.h>

int main ()
{
    int i, x = 2, count;

    printf ("Prime numbers from 1 to 300\n");
    while ( x <= 300 )
    {
        count = 0;
        i = 2;
        while ( x > i )
        {
            if (x % i == 0)
            {
                count++;
                break;
            }
        i++;
        }
        if ( count == 0)
        {
            printf ("%d\n", x);
        }
        x++;
    }
    return 0;
}
