#include <stdio.h>

int multiply (int num1, int num2)
{
    int result = 1;
    for (int i= 1; i <= num2; i++)
    {
        result = result * num1;
    }
    return result;
}

int main ()
{
    int i = 1, n, sum = 0;
    printf ("Enter a number: ");
    scanf ("%d", &n);

    while (i <= n)
    {
        sum = sum + multiply (i, i);
        i++;
    }
    printf ("%d", sum);

    return 0;
}
