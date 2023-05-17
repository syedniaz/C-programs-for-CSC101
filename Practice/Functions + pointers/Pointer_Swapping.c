#include <stdio.h>

void Gradient (float x1, float x2, float y1, float y2, float *s)
{
    *s = (y1 - y2)/(x1 - x2);
}

int main ()
{
    float x1, x2, y1, y2, slope;
    printf ("Enter value of x1: ");
    scanf ("%f", &x1);

    printf ("Enter value of y1: ");
    scanf ("%f", &y1);

    printf ("Enter value of x2: ");
    scanf ("%f", &x2);

    printf ("Enter value of y2: ");
    scanf ("%f", &y2);

    Gradient (x1, x2, y1, y2, &slope);

    printf ("\nThe slope = %.2f", slope);

    return 0;
}
