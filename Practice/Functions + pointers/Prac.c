#include <stdio.h>

int main ()
{
    char arr [500];
    int i = -1;

    do
    {
        i++;
        scanf ("%c", &arr[i]);
    } while (arr[i] != '\n');
    arr[i] = '\0';

    for (int j = 0; arr[j] != '\0'; j++)
    {
        printf ("%c", arr[j]);
    }

    return 0;
}
