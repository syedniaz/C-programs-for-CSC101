#include <stdio.h>

int main () {

    float x;
    float y;

    printf ("Enter first number : ");
    scanf ("%f", &x);

    printf ("Enter second number : ");
    scanf ("%f", &y);

    float res_add, res_sub, res_mul, res_div;

    res_add = x + y;
    res_sub = x - y;
    res_mul = x * y;
    res_div = x / y;

    printf ("Number %.1f added to number %f equals to %f \n", x, y, res_add);
    printf ("Number %f subtracted from number %f equals to %f \n", x, y, res_sub);
    printf ("Number %f multiplied to number %f equals to %f \n", x, y, res_mul);
    printf ("Number %f divided by number %f equals to %f \n", x, y, res_div);

    return 0;
}
