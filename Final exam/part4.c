#include <stdio.h>

int main ()
{
    int day, month, year;

    printf("Date format: DD/MM/YY\n");
    printf ("Enter day(DD): ");
    scanf ("%d", &day);
    while (day <= 0 || day > 31)
    {
        printf ("Please enter a valid number: ");
        scanf ("%d", &day);
    }

    printf ("Enter month(MM): ");
    scanf ("%d", &month);
    while (month <= 0 || month > 12)
    {
        printf ("Please enter a valid number: ");
        scanf ("%d", &month);
    }

    printf ("Enter year(YY): ");
    scanf ("%d", &year);
    while (year <= 0)
    {
        printf ("Please enter a valid number: ");
        scanf ("%d", &year);
    }

    int m = month;
    int y = year;

    if (m == 1)
    {
        m = 13;
        y--;
    }
    else if (m == 2)
    {
        m = 14;
        y--;
    }

    int q = day;

    int h = (q + ((26 * (m + 1)) / 10) + y + (y/4) + (6 * (y / 100)) + (y / 400)) % 7;

    printf ("%d/%d/%d was ", day, month, year);
    switch (h)
    {
    case 0:
        printf ("Saturday\n");
        break;
    case 1:
        printf ("Sunday\n");
        break;
    case 2:
        printf ("Monday\n");
        break;
    case 3:
        printf ("Tuesday\n");
        break;
    case 4:
        printf ("Wednesday\n");
        break;
    case 5:
        printf ("Thursday\n");
        break;
    case 6:
        printf ("Friday\n");
        break;
    }

    return 0;
}
