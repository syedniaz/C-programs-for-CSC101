#include <stdio.h>

//factorial

int main ()
{
    int n, product = 1;

    printf ("Enter the value of n : ");
    scanf ("%d", &n);

    for (int i =1 ; i <= n ; i++)
    {
        product = product * i;
    }

    printf ("Product = %d", product);

    return 0;
}
