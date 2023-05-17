#include <stdio.h>

int main () {

    printf ("Enter a five digit number : ");
    int initial_num;
    scanf ("%d", &initial_num);

    if ( initial_num <= 99999 && initial_num >= 10000 ) {

    int num;
    num = initial_num;

    int d1 = num % 10;
    num = num / 10;
    printf ("The fifth digit is %d\n", d1);

    int d2 = num % 10;
    num = num / 10;
    printf ("The fourth digit is %d\n", d2);

    int d3 = num % 10;
    num = num / 10;
    printf ("The third digit is %d\n", d3);

    int d4 = num % 10;
    num = num / 10;
    printf ("The second digit is %d\n", d4);

    int d5 = num % 10;
    num = num / 10;
    printf ("The first digit is %d\n", d5);

    int reversed = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;
    printf ("The reversed number is %d\n", reversed);

    if (reversed == initial_num) {
        printf ("Initial number is equal to reversed number \n");
    }
    else {
        printf ("Initial number is not equal to reversed number \n");
    }

    } else {
        printf ("Invalid input ");
    }

    return 0;
}
