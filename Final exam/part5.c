#include <stdio.h>
#include <stdlib.h>


void function (int *a, int *b)
{
    for (int i = 1; i < 1000; i++)
    {
        if (*(a+i) > *(a+i-1) && *(a+i) > *(a+i+1)) *(b+i) = *(a+i);
    }

    printf ("Peaks(ignore 0):\n");

    for (int i = 0; i < 1000; i++)
    {
        printf ("%d\n", *(b+i));
    }

    int peaknum = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (*(b+i) != 0) peaknum++;
    }

    printf ("\nAnd so number of peaks = %d", peaknum);
}

int main ()
{
    int arr[1000], brr[1000] = {0};

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand();
    }

    printf ("Produced = ");

    for (int i = 0; i < 1000; i++)
    {
        printf ("%d\n", arr[i]);
    }

    function (&arr, &brr);

    return 0;
}
