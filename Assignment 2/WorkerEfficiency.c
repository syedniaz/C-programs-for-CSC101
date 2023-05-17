#include <stdio.h>

int main () {

    printf ("Enter number of hours worked by worker: ");
    float hours;
    scanf ("%f", &hours);


    if (hours > 0) {
    if (hours < 3) {
        printf ("\nWorker is highly efficient.\n");
    } else if (hours >= 3 && hours < 4) {
        printf ("\nWorker needs to improve his/her speed.\n");
    } else if (hours >= 4 && hours < 5) {
        printf ("\nWorker to be given training to improve his/her speed.\n");
    } else {
        printf ("\nWorker has to leave the company.\n");
    }
    } else {
        printf ("\nHours cannot be negative.\n");
    }

    return 0;
}
