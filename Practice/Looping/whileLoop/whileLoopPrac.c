#include <stdio.h>

int main () {

//    int x, sum = 0, count = 0;
//
//    while (count < 5) {
//        printf ("Enter an integer : ");
//        scanf ("%d", &x);
//        sum = sum + x;
//        count++;
//    }
//
//    printf ("\nSum = %d", sum);

    int i=0;

    while (i < 256) {
        printf ("%c = %d\n", i, i);
        i++;
    }

    return 0;
}
