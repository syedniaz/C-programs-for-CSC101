#include <stdio.h>

int main ()
{
    int i = 5;
    int data [i];
    printf ("Enter five numbers: ");
    for (int j = 0; j < i; j++)
    {
        scanf ("%d", &data[j]);
    }

    for (int k = 0; k <= 4; k++)
    {
        for (int l = 1; l <= data[k]; l++)
        {
            if (l % 5 == 0) printf ("*");
            else printf ("-");
        }
        printf ("\n");
    }

    return 0;
}
