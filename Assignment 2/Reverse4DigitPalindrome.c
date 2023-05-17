#include <stdio.h>

int main () {

    printf ("Enter a four digit number : ");
    int initial_num;
    scanf ("%d", &initial_num);

    if ( initial_num <= 9999 && initial_num >= 1000 ) {

    int num;
    num = initial_num;

    int d1 = num % 10;
    num = num / 10;
    printf ("The fourth digit is %d\n", d1);

    int d2 = num % 10;
    num = num / 10;
    printf ("The third digit is %d\n", d2);

    int d3 = num % 10;
    num = num / 10;
    printf ("The second digit is %d\n", d3);

    int d4 = num % 10;
    num = num / 10;
    printf ("The first digit is %d\n", d4);

    int reversed = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
    printf ("The reversed number is %d\n", reversed);

    if (reversed == initial_num) {
        printf ("It is a palindrome number\n");
    }
    else {
        printf ("It is not a palindrome number\n");
    }

    } else {
        printf ("Invalid input ");
    }

    return 0;
}

