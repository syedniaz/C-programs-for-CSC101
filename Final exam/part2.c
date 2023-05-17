#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand();
    }

    int max = arr[0];
    for (int i = 0; i < 9; i++)
    {
        if (arr[i+1] > max) max = arr[i+1];
    }

    int min = arr[0];
    for (int i = 0; i < 9; i++)
    {
        if (arr[i+1] < min) min = arr[i+1];
    }

    printf ("Generated output : ");

    for (int i = 0; i < 10; i++)
    {
        printf ("%d ", arr[i]);
    }

    printf ("\nMax = %d\n", max);
    printf ("Min = %d\n", min);

    int difference = max - min;
    printf ("Difference = %d\n", difference);

    return 0;
}
