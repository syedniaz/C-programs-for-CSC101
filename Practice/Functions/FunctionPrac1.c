#include <stdio.h>

double Factorial (float x) //x!
{
    double result = 1;

    for (int i = 1; i <= x; i++)
    {
        result = result * i;
    }
    return result;
}

double Power (int base, int exp) // x^n
{
    double result = 1;

    for (int i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    return result;
}

double Sine (float x, float n)
{
    int term = 1;
    double result = 0;
    for(int i = 1; i <= n; i = i+2)
    {
        if(term % 2 != 0)
        {
            result = result + (Power(x, i)/Factorial(i));
        }
        else
        {
            result = result - (Power(x, i) / Factorial(i));
        }
        term++;
    }
    return result;
}

int main ()
{
    printf ("To calculate = x^1/1! - (x^3 / 3!) + (x^5 / 5!) - (x^7 / 7!) + ... + (x^n / n!)\n");

    int x,n;
    printf ("Enter a number(x): ");
    scanf ("%d", &x);

    while (x < 1 || x > 10 )
    {
        printf ("Please enter a value between 1 to 10\n");
        scanf ("%d", &x);
    }

    printf ("Enter a number(n): ");
    scanf ("%d", &n);

    while (n < 1 || n > 50)
    {
        printf ("Please enter a value between 1 to 50\n");
        scanf ("%d", &n);
    }

    printf ("Result = %lf\n", Sine(x,n));

    return 0;
}
