#include <stdio.h>

int main () {

    printf ("Enter a five digit number : ");
    int num;
    scanf ("%d", &num);

    int d1 = num % 10;
    num = num / 10;
    printf ("The fifth digit is %d\n", d1);

    int d2 = num % 10;
    num = num / 10;
    printf ("The fourth digit is %d\n", d2);

    int d3 = num % 10;
    num = num / 10;
    printf ("The fifth digit is %d\n", d3);

    int d4 = num % 10;
    num = num / 10;
    printf ("The fifth digit is %d\n", d4);

    int d5 = num % 10;
    num = num / 10;
    printf ("The fifth digit is %d\n", d5);

    int sum = d1 + d2 + d3 + d4 + d5;
    printf ("The sum of the digits is %d", sum);

    return 0;
}
