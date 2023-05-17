#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num [100];

    for (int i = 0; i < 100; i++)
    {
        num[i] = i+1;
    }

    int j = num[1];
    for (int i = 1; i < 100; i++)
    {
        if (num[i] == (j * i)) num[i] = 0;
    }

    for (int i = 0; i < 100; i++)
    {
        printf ("%d\n", num[i]);
    }

    return 0;
}
