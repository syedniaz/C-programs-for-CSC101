#include <stdio.h>

int main () {
   int x, sum = 0;
   float count = 1.0, avg = 0;

   while(count <= 5) {
        printf ("Enter number : ");
        scanf ("%d", &x);
        sum = sum + x;
        avg = sum / count;
        count++;
   }
   printf ("\nSum : %d\n", sum);
   printf ("\nAverage : %.1f\n", avg);

    return 0;
}
