#include <stdio.h>

float bmi (float h, float w)
{
    float result;
    result = w / (h * h);
    return result;
}

int main ()
{
    float weight, height;

    printf ("Enter your height (in m): ");
    scanf ("%f", &height);

    printf ("Enter your weight(in kg): ");
    scanf ("%f", &weight);

    float value;
    value = bmi(height, weight);

    printf ("Your BMI = %.2f", value);


    return 0;
}
