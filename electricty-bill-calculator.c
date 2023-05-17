#include <stdio.h>

int main () {

    printf ("Welcome to Electricity Bill Calculator\n");
    printf ("Please enter the number of units consumed : ");
    int units;
    scanf ("%d", &units);

    float unit_cost;

    if (units > 0 && units <= 200) {
        unit_cost = 5.0;
    } else if (units > 200 && units <= 400 ) {
        unit_cost = 8.0;
    } else if (units > 400 && units <= 600 ) {
        unit_cost = 10.0;
    } else if (units > 600) {
        unit_cost = 15.0;
    } else {
        printf ("************************************************************************************\n");
        printf ("Invalid input\n");
    }

    float cost = units * unit_cost;
    printf ("\n");
    printf ("************************************************************************************\n");
    printf ("Number of units consumed : %d at %.1f Tk per unit\n", units, unit_cost);
    printf ("Total cost : %.1f TK", cost);

    return 0;
}
