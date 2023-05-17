#include <stdio.h>

int main () {

    printf ("Enter the distance between two cities in km : ");
    float dis_in_km;
    scanf ("%f", &dis_in_km);

    printf ("The distance in km is : %.2f\n", dis_in_km);

    float dis_in_m = dis_in_km * 1000;
    printf ("The distance in m is : %.2f\n", dis_in_m);

    float dis_in_ft = dis_in_km * 3281;
    printf ("The distance in ft is : %.2f\n", dis_in_ft);

    float dis_in_inches = dis_in_km * 39370;
    printf ("The distance in inches is : %.2f\n", dis_in_inches);

    float dis_in_cm = dis_in_km * 100000;
    printf ("The distance in cm is : %.2f\n", dis_in_cm);

    return 0;
}
