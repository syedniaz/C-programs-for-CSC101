#include <stdio.h>

int main ()
{
    int i,j;
    int n,m;
    char h = 3;
    printf ("Enter a number of rows: ");
    scanf ("%d", &n);

    printf ("Enter a number of columns: ");
    scanf ("%d", &m);


    for ( i = 1 ; i <= n; i++)
    {
        for ( j = 1; j <= m; j++)
        {
            printf ("%c", h);
        }
        printf ("\n");
        if (h==3)
        {
            h = 4;
        }
        else if ( h == 4)
        {
            h = 3;
        }
    }

    return 0;
}
