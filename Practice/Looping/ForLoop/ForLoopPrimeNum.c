#include <stdio.h>

int main ()
{
    int i;
    for (i=2; i < 100; i++)
    {
        if (i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0)
            {
                printf ("%d\n", i);
            }
    }
    return 0;
}
