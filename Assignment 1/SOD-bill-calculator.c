#include <stdio.h>

int main () {

    printf ("Welcome IUB Student on Duty \n");
    printf ("Please enter the number of hours you worked this semester : ");\
    int hours;
    scanf ("%d", &hours);

    int hourly_rate = 100;
    float tax_rate = 0.10;
    int total = hours * hourly_rate;
    int tax = total * tax_rate;
    int gross = total - tax;

    printf ("\n");
    printf ("************************************************************************************\n");
    printf ("Salary sheet for the month of July, 2020\n");
    printf ("____________________________________________________________________________________\n");
    printf ("Hours served \t\t: \t%d\n", hours);
    printf ("Rate per hour \t\t: \t%d\n", hourly_rate);
    printf ("____________________________________________________________________________________\n");
    printf ("Total \t\t\t: \t%d\n", total);
    printf ("-10%% Tax \t\t: \t%d\n", tax);
    printf ("____________________________________________________________________________________\n");
    printf ("Gross payable \t\t: \t%d\n", gross);
    printf ("************************************************************************************\n");

    return 0;
}
