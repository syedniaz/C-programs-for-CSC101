#include <stdio.h>

double Power(int base, int exponent)
{
    double result = 1;
    double baseforneg = base;

    if(exponent > 0)
    {
        for(int i = 1; i <= exponent; i++)
        {
            result = result * base;
        }
    }
    else if(exponent < 0)
    {
        for(int i = 1; i <= - exponent; i++)
        {
            result = result * (1 / baseforneg);
        }
    }
    return result;
}
int main ()
{
    int b, x;
    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter exponent: ");
    scanf("%d", &x);

    double result = Power (b, x);

    printf("Base ^ exponent = %lf", result);

    return 0;
}
