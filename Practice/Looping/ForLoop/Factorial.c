#include <stdio.h>

//calculating factorial
int main ()
{
    int i=1, n, factorial = 1;
    printf ("Enter a number: ");
    scanf ("%d", &n);

//    //using while loop
//    while ( i <= n)
//    {
//        factorial = factorial * i;
//        i++;
//    }

    //using for loop
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }



    printf ("Factorial of %d = %d", n, factorial);

    return 0;
}
