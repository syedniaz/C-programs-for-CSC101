#include <stdio.h>
#include <windows.h>

int main ()
{
    int choice;

    do
    {
        printf ("Enter 1 for addition\n");
        printf ("Enter 2 for subtraction\n");
        printf ("Enter 3 for multiplication\n");
        printf ("Enter 4 for division\n");
        printf ("Enter 5 for factorial\n");
        printf ("Enter 6 to calculate x^y\n");
        printf ("Enter 7 to convert from decimal to binary\n");
        printf ("Enter 8 to convert from binary to decimal\n");
        printf ("Enter 9 to see the menu again\n");
        printf ("Enter 0 to exit\n");

        printf ("\nEnter your choice : ");
        scanf ("%d", &choice);

        system ("cls");

        if (choice == 1)
        {
            int x,y,sum;
            printf ("Enter first number : ");
            scanf ("%d", &x);
            printf ("Enter second number : ");
            scanf ("%d", &y);
            sum = x+y;
            printf ("Addition of %d and %d is %d\n", x,y,sum);
        }
        else if (choice == 2)
        {
            int x,y,sub;
            printf ("Enter first number : ");
            scanf ("%d", &x);
            printf ("Enter second number : ");
            scanf ("%d", &y);
            sub = x-y;
            printf ("Subtracting %d and %d equals to %d\n", y,x,sub);
        }
        else if (choice == 3)
        {
            int x,y,product;
            printf ("Enter first number : ");
            scanf ("%d", &x);
            printf ("Enter second number : ");
            scanf ("%d", &y);
            product = x*y;
            printf ("Product of %d and %d is %d", x,y,product);
        }
        else if (choice == 4)
        {
            float x,y,div;
            printf ("Enter first number : ");
            scanf ("%f", &x);
            printf ("Enter second number : ");
            scanf ("%f", &y);
            div = x*y;
            if ( y == 0)
            {
                printf ("Divisor cannot be zero");
            } else
            {
                printf ("Division of %.2f and %.2f is %.2f", x,y,div);
            }
        }
        else if (choice == 5)
        {
            int n, product = 1;

            printf ("Enter the value of n : ");
            scanf ("%d", &n);

            for (int i =1 ; i <= n ; i++)
            {
                product = product * i;
            }

            printf ("Result = %d", product);
        }
        else if (choice == 6)
        {
            int x,y,answer;
            printf ("Enter first number : ");
            scanf ("%d", &x);
            printf ("Enter second number : ");
            scanf ("%d", &y);
            answer = x^y;
            printf ("%d ^ %d equals to %d", x,y,answer);
        }
        else if (choice == 7)
        {
            int remainder, x;
            long long int binRev = 9;

            printf ("Enter decimal number : ");
            scanf ("%d", &x);

            while ( x > 0)
            {
                remainder=x%2;
                x=x/2;
                binRev = binRev * 10 + remainder;
            }

            printf ("%ld\n", binRev);

            int digit;
            long long int binary=0;
            while (binRev > 9)
            {
                digit = binRev%10;
                binary = binary * 10 + digit;
                binRev = binRev / 10;
            }

            printf ("%ld", binary);


        }
        else if (choice == 8)
        {
            int x;
            printf ("Enter binary number : ");
            scanf ("%d", &x);
            printf ("Decimal value of %b = %d", x,x);
        }



    } while (choice >= 1 && choice <= 9);


    return 0;
}
