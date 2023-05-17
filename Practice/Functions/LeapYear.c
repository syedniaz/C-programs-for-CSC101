#include <stdio.h>

int PrintLeapYear ()
{
    printf ("Leap years since 1990:\n");
    int year = 1990;
    while ( year >= 1990 && year <= 2020)
    {
        if ((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0))
        {
            printf ("%d\n", year);
        }
        year++;
    }
}

int main ()
{
    PrintLeapYear ();
    return 0;
}
