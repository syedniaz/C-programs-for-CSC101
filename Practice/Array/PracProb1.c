#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num [100];

    for ( int i = 0; i < 100; i++)
    {
        num [i] = rand();
    }

    int num1;
    printf ("Enter an integer: ");
    scanf ("%d", &num1);

    int n = 0;

    for (int i = 0; i < 100; i++)
    {
        //printf ("%d\n", num[i]);
        if (num [i] == num1) n++;
        else continue;
    }

    if (n == 0)
    {
        printf ("Number not found");
    }
    else
    {
        printf ("Number of times this number appears = %d", n);
    }

    return 0;
}
