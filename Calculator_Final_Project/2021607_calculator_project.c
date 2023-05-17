#include <stdio.h>
#include <windows.h>
#include "function.h"

int main ()
{
    int choice;

    do
    {
        printf ("Enter 1 for addition\n");
        printf ("Enter 2 for subtraction\n");
        printf ("Enter 3 for multiplication\n");
        printf ("Enter 4 for division\n");
        printf ("Enter 5 for calculate square\n");
        printf ("Enter 6 to calculate cube\n");
        printf ("Enter 7 to power (x^y)\n");
        printf ("Enter 8 to calculate remainder(mod)\n");
        printf ("Enter 9 for Int\n");
        printf ("Enter 10 for Exp(x*10^y)\n");
        printf ("Enter 11 for 10^x\n");
        printf ("Enter 12 for Factorial\n");
        printf ("Enter 13 for Inverse\n");
        printf ("Enter 14 for Sign Reversal\n");
        printf ("Enter 15 for Percentage\n");
        printf ("Enter 0 to exit\n");

        printf ("\nEnter your choice : ");
        scanf ("%d", &choice);

        system ("cls");

        if (choice == 1)
        {
            float x,y;
            printf ("Enter first number : ");
            scanf ("%f", &x);
            printf ("Enter second number : ");
            scanf ("%f", &y);
            printf ("Addition of %.1f and %.1f = %.1f\n\n", x,y,Sum(x,y));
        }

        if (choice == 2)
        {
            float x,y;
            printf ("Enter first number : ");
            scanf ("%f", &x);
            printf ("Enter second number : ");
            scanf ("%f", &y);
            printf ("Subtraction of %.1f and %.1f = %.1f\n\n", x,y,Sub(x,y));
        }

        if (choice == 3)
        {
            float x,y;
            printf ("Enter first number : ");
            scanf ("%f", &x);
            printf ("Enter second number : ");
            scanf ("%f", &y);
            printf ("Product of %.1f and %.1f = %.1f\n\n", x,y,Product(x,y));
        }

        if (choice == 4)
        {
            float x,y;
            printf ("Enter first number : ");
            scanf ("%f", &x);
            printf ("Enter second number : ");
            scanf ("%f", &y);
            while (y == 0)
            {
                printf("Divisor cannot be zero\nEnter second number again: ");
                scanf ("%f", &y);
            }
            printf ("Division of %.1f by %.1f = %f\n\n", x,y,Div(x,y));
        }

        if (choice == 5)
        {
            float x;
            printf ("Enter number : ");
            scanf ("%f", &x);
            printf ("Square of %.1f = %.1f\n\n", x,Sqr(x));
        }

        if (choice == 6)
        {
            float x;
            printf ("Enter number : ");
            scanf ("%f", &x);
            printf ("Cube of %.1f = %.1f\n\n", x,Cube(x));
        }

        if (choice == 7)
        {
            double x,y;
            printf ("Enter base(x) : ");
            scanf ("%lf", &x);
            printf ("Enter exponent(y) (Please enter integer value from -6 to 20): ");
            scanf ("%lf", &y);
            printf ("%.1lf ^ %.1lf = %.1lf\n\n", x, y, Power(x,y));
        }

        if (choice == 8)
        {
            int x,y;
            printf ("Enter first number(Enter integer values only): ");
            scanf ("%d", &x);
            printf ("Enter second number(Enter integer values only): ");
            scanf ("%d", &y);
            while (y == 0)
            {
                printf("Divisor cannot be zero\nEnter second number again: ");
                scanf ("%d", &y);
            }
            printf ("Remainder when %d is divided by %d = %d\n\n", x,y,Mod(x,y));
        }

        if (choice == 9)
        {
            float x;
            printf ("Enter number : ");
            scanf ("%f", &x);
            printf ("Integer of %.1f = %d\n\n", x,Int(x));
        }

        if (choice == 10)
        {
            double x,y;
            printf ("Enter first number : ");
            scanf ("%lf", &x);
            printf ("Enter second number(Please enter integer value from -6 to 20): ");
            scanf ("%lf", &y);
            printf ("%.1lf * 10 ^ %.1lf = %llf\n\n", x, y, Exp(x,y));
        }

        if (choice == 11)
        {
            float x;
            printf ("Enter value of x(Please enter integer value from -6 to 20): ");
            scanf ("%f", &x);
            printf ("10 ^ %.1f = %lf\n\n", x, PowerTen(x));
        }


        if (choice == 12)
        {
            long long int x;
            printf ("Enter integer number(between -20 and 20)\nNumber will be cutoff(entering 5.6 will take 5): ");
            scanf ("%lld", &x);
            printf ("Factorial of %lld = %lld\n\n", x,Fact(x));
        }

        if (choice == 13)
        {
            double x;
            printf ("Enter number(between -1000000 and 1000000): ");
            scanf ("%lf", &x);
            while (x == 0)
            {
                printf("Value cannot be zero\nEnter number again: ");
                scanf ("%lf", &x);
            }
            printf ("Inverse of %lf = %lf\n\n", x,Inv(x));
        }

        if (choice == 14)
        {
            float x;
            printf ("Enter number : ");
            scanf ("%f", &x);
            printf ("Reversing the sign gives %f\n\n",SignRev(x));
        }

        if (choice == 15)
        {
            float x,y;
            printf ("Enter first number : ");
            scanf ("%f", &x);
            printf ("Enter second number : ");
            scanf ("%f", &y);
            while (y == 0)
            {
                printf("Divisor cannot be zero\nEnter second number again: ");
                scanf ("%f", &y);
            }
            printf ("%.1f is %.2f%% of %.1f\n\n", x,Percentage(x,y),y);
        }


    } while (choice != 0);

    return 0;
}
