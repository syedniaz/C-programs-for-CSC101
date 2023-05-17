#include <stdio.h>

void copyArray (int *s, int *d)
{
    const int len = 30;
    for (int i = 0; i < len; i++)
    {
        *(d+i) = *(s+len-1-i);
    }
}

int main ()
{
    const int len = 30;
    int arr[30], brr[30];
    for (int i = 0; i < len; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d\n", arr[i]);
    }

    copyArray (&arr, &brr);

    for (int i = 0; i < len; i++)
    {
        printf("%d\n", brr[i]);
    }


    return 0;
}
