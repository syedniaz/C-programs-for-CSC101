#include <stdio.h>

int main () {

    printf ("Enter a four digit number : ");
    int num;
    scanf ("%d", &num);

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

    if (d1 == 9) {
        d1 = 0;
    } else {
        d1 = d1 + 1;
    }

    if (d2 == 9) {
        d2 = 0;
    } else {
        d2 = d2 + 1;
    }

    if (d3 == 9) {
        d3 = 0;
    } else {
        d3 = d3 + 1;
    }

    if (d4 == 9) {
        d4 = 0;
    } else {
        d4 = d4 + 1;
    }


    int new_sum = d4*1000 + d3*100 + d2*10 + d1;

    printf ("The new number is %d", new_sum);

    return 0;
}

