#include <stdio.h>

int GCD (int a, int b)
{
    int rem, s1 = a, s2 = b, s3;

    if (b == 0) s1 = a;
    else {
    while (s3 != 0)
    {
        rem = s1 / s2;
        s3 = s1 - (rem * s2);
        s1 = s2;
        s2 = s3;
    }
    }
    return s1;
}

int main ()
{
    int a,b;
    printf ("Enter integer number(enter greater number first): ");
    scanf ("%d%d", &a,&b);

    while (b>a)
    {
        printf ("Please enter greater number first): ");
        scanf ("%d%d", &a,&b);
    }

    printf ("Greatest Common Divisor of %d and %d = %d", a, b, GCD(a,b));

    return 0;
}
