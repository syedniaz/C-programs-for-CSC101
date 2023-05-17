#include <stdio.h>

int main ()
{
    printf ("A B C D E F  G  F E D C B A\n");

    for (int i = 1; i <= 7; i++)
    {
        for ( char c = 65; c <= (71 - i); c++)
        {
            printf ("%c ", c);
        }

        for (int j = 1; j <= i; j++)
        {
            printf (" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf (" ");
        }

        for (int l = 1; l <= i; l++)
        {
            printf ("  ");
        }

       for ( char d = 71 - i; d >= 65 ; d--)
        {
            printf ("%c ", d);
        }

        printf ("\n");
    }


    return 0;
}
