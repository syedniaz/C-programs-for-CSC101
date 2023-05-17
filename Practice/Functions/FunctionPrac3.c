#include <stdio.h>
#include <math.h>

float Area (float a, float b, float c)
{
    float s,result;
    s = (a + b + c)/2;
    result = s * (s-a) * (s-b) * (s-c);
    result = sqrt(result);
    return result;
}

int main ()
{
    float a,b,c;
    printf ("Enter lengths of sides of triangle: ");
    scanf ("%f%f%f", &a,&b,&c);

    printf ("Area of triangle= %.2f", Area(a,b,c));

    return 0;
}
