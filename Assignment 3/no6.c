#include <stdio.h>

int main ()
{
    int n = 2147483647; // last positive value of int range

    for (int i = 0;;)
    {
        if ( i >= 0 && i <= n)
        {
            printf ("%d\n", i);
            i++;
        }
        if (i == n)
        {
            i = 0;
        }

        if (i <= 0 && i >= -n)
        {
            printf ("%d\n", i);
            i--;
        }
        if ( i == -n)
        {
            break;
        }
    }


    return 0;
}
