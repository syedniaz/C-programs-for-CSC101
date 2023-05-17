#include <stdio.h>

int main () {

    printf ("Welcome to Electricity Bill Calculator\n");
    printf ("Please enter the number of units consumed: ");
    int units;
    scanf ("%d", &units);

    while (units < 0)
    {
        printf ("Please enter a positive number : ");
        scanf ("%d", &units);
    }

    float unit_cost;

    switch (units > 0 && units <= 200)
    {
        case 1:
            unit_cost = 6.0;
            break;
    }
    switch (units > 200 && units <= 400 )
    {
        case 1:
            unit_cost = 8.0;
            break;
    }
    switch (units > 400 && units <= 600)
    {
        case 1:
            unit_cost = 10.0;
            break;
    }
    switch (units > 600)
    {
        case 1:
            unit_cost = 12.0;
            break;
    }


    float cost = units * unit_cost;
    printf ("\n");
    printf ("************************************************************************************\n");
    printf ("Number of units consumed : %d at %.1f Tk per unit\n", units, unit_cost);
    printf ("Total cost : %.1f TK", cost);

    return 0;
}

