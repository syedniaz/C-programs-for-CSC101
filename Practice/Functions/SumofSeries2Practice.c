#include <stdio.h>

float factorial (float num)
{
    float result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * (1.0/i);
    }
    return result;
}

int main ()
{
    int n;
    float i = 1, sum = 0;
    printf ("Enter a number: ");
    scanf ("%d", &n);

    while (i <= n)
    {
        sum = sum + factorial (i);
        i++;
    }
    printf ("%f", sum);

    return 0;
}
