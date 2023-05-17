#include <stdio.h>

int main (){

    printf ("Welcome to addition calculator\n");

    printf ("Enter the first number : ");
    float f0r3v3r;
    scanf ("%f", &f0r3v3r);

    printf ("Enter the second number : ");
    float num2;
    scanf ("%f", &num2);

    float result;
    result = f0r3v3r + num2;
    printf ("Result of %.2f + %.2f = %.2f", f0r3v3r, num2, result);


    return 0;
}
