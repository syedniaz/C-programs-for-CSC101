#include <stdio.h>

int main () {

    int C, D;

    printf("Enter the value of C : ");
    scanf("%d", &C);

    printf("Enter the value of D : ");
    scanf("%d", &D);

    int X = D;
    D = C;
    C = X;

    printf("After swapping C = %d and D = %d", C, D);

    return 0;
}
