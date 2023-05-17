#include <stdio.h>

int main ()
{
    char s [500];
    gets(s);

    int t[500] = {0};

    int j = 0, count;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count = 0;
        for (j; s[j] != ' '; j++)
        {
            count++;
        }
        j++;
        t[i] = count;
    }

    for (int i = 0; i < 10; i++)
    {
        printf ("%d ", t[i]);
    }
    printf("\n");

    int max = t[0];
    for (int i = 0; i < 9; i++)
    {
        if (t[i+1] > max) max = t[i+1];
    }

    int min = t[0];
    for (int i = 0; i < 9; i++)
    {
        if (t[i+1] < min) min = t[i+1];
    }

    printf ("\nMax = %d\n", max);
    printf ("Min = %d\n", min);

    printf("\n");
    puts(s);

    return 0;
}
