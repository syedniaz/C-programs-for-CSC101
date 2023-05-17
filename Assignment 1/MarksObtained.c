#include <stdio.h>

int main () {

    int sub1, sub2, sub3, sub4, sub5;
    printf ("Enter marks obtained in first subject : ");
    scanf ("%d", &sub1);

    printf ("Enter marks obtained in second subject : ");
    scanf ("%d", &sub2);

    printf ("Enter marks obtained in third subject : ");
    scanf ("%d", &sub3);

    printf ("Enter marks obtained in fourth subject : ");
    scanf ("%d", &sub4);

    printf ("Enter marks obtained in fifth subject : ");
    scanf ("%d", &sub5);

    float total = sub1 + sub2 + sub3 + sub4 + sub5;
    printf ("\n");
    printf ("Total marks obtained out of 500 : %.2f\n", total);

    float percentage = (( total / 500 ) * 100);
    printf ("Percentage obtained : %.2f %%\n", percentage);

    return 0;
}
