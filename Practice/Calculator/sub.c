#include <stdio.h>

int main () {

    printf ("Welcome to subtraction calculator\n");

    printf ("Enter first number : ");
    float Num1;
    scanf ("%f", &Num1);

    printf ("Enter second number : ");
    float Num2;
    scanf ("%f", &Num2);

    float result;
    result = Num1 - Num2;
    printf ("The result of %.2f - %.2f is %.2f", Num1, Num2, result);

    return 0;
}
