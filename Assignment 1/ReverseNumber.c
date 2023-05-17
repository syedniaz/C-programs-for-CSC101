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

    int reversed = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    printf ("The reversed number is %d", reversed);

    return 0;
}
