#include <stdio.h>

int main () {

    printf ("Enter the amount in taka you want to convert : ");
    int taka;
    scanf ("%d", &taka);

    // 1 dollar = 84.12 taka
    // 1 dollar = 84 taka rounded off

    int dollar = taka / 84;
    float cents = ((taka / 84.0) - dollar)*100;

    printf ("\n");
    printf ("The amount you will get is $%d and %.0f cents", dollar, cents);

    return 0;
}
