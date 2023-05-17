#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num [100];

    for (int i = 0; i < 100; i++)
    {
        num[i] = rand();
    }

    int even = 0, odd = 0, pos = 0, neg = 0;

    for (int i = 0; i < 100; i++)
    {
        if (num[i] >= 0 && num[i] % 2 == 0)
        {
            pos++;
            even++;
        }
        else if (num[i] > 0 && num[i] % 2 != 0)
        {
            pos++;
            odd++;
        }
        else if (num[i] < 0 && num[i] % 2 == 0)
        {
            neg++;
            even++;
        }
        else if (num[i] < 0 && num[i] % 2 != 0)
        {
            neg++;
            odd++;
        }
    }

    printf("In the randomly generated array,there are\n");
    printf("%d positive numbers\n", pos);
    printf("%d negative numbers\n", neg);
    printf("%d even numbers\n", even);
    printf("%d odd numbers\n", odd);


    return 0;
}
