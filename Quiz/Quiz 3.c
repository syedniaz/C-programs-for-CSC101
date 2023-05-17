#include <stdio.h>

int main ()
{
    int amount;
    printf("Enter a 5 digit number: ");
    scanf("%d", &amount);

    if(amount > 99999 || amount < 10000)
    {
        printf("Amount is not a five digit number\n");
        return 0;
    }

    printf ("In words : ");

    int d1, d2;

    int x = amount;

    d1 = amount / 10000;
    d2 = amount / 1000;

    if (d1 == 1)
    {
        if (d2 == 10)
        {
            printf ("Ten");
            x = x - 10000;
        }
        else if (d2 == 11)
        {
            printf ("Eleven");
            x = x - 11000;
        }
        else if (d2 == 12)
        {
            printf ("Twelve");
            x = x - 12000;
        }
        else if (d2 == 13)
        {
            printf ("Thirteen");
            x = x - 13000;
        }
        else if (d2 == 14)
        {
            printf ("Fourteen");
            x = x - 14000;
        }
        else if (d2 == 15)
        {
            printf ("Fifteen");
            x = x - 15000;
        }
        else if (d2 == 16)
        {
            printf ("Sixteen");
            x = x - 16000;
        }
        else if (d2 == 17)
        {
            printf ("Seventeen");
            x = x - 17000;
        }
       else if (d2 == 18)
        {
            printf ("Eighteen");
            x = x - 18000;
        }
        else if (d2 == 19)
        {
            printf ("Nineteen");
            x = x - 19000;
        }
    }

    if (d1 == 2)
    {
        if (d2 == 20)
        {
            printf ("Twenty");
            x = x - 20000;
        }
        else if (d2 == 21)
        {
            printf ("Twenty One");
            x = x - 21000;
        }
        else if (d2 == 22)
        {
            printf ("Twenty Two");
            x = x - 22000;
        }
        else if (d2 == 23)
        {
            printf ("Twenty Three");
            x = x - 23000;
        }
        else if (d2 == 24)
        {
            printf ("Twenty Four");
            x = x - 24000;
        }
        else if (d2 == 25)
        {
            printf ("Twenty Five");
            x = x - 25000;
        }
        else if (d2 == 26)
        {
            printf ("Twenty Six");
            x = x - 26000;
        }
        else if (d2 == 27)
        {
            printf ("Twenty Seven");
            x = x - 27000;
        }
       else if (d2 == 28)
        {
            printf ("Twenty Eight");
            x = x - 28000;
        }
        else if (d2 == 29)
        {
            printf ("Twenty Nine");
            x = x - 29000;
        }
    }

    if (d1 == 3)
    {
        if (d2 == 30)
        {
            printf ("Thirty");
            x = x - 30000;
        }
        else if (d2 == 31)
        {
            printf ("Thirty One");
            x = x - 31000;
        }
        else if (d2 == 32)
        {
            printf ("Thirty Two");
            x = x - 32000;
        }
        else if (d2 == 33)
        {
            printf ("Thirty Three");
            x = x - 33000;
        }
        else if (d2 == 34)
        {
            printf ("Thirty Four");
            x = x - 34000;
        }
        else if (d2 == 35)
        {
            printf ("Thirty Five");
            x = x - 35000;
        }
        else if (d2 == 36)
        {
            printf ("Thirty Six");
            x = x - 36000;
        }
        else if (d2 == 37)
        {
            printf ("Thirty Seven");
            x = x - 37000;
        }
       else if (d2 == 28)
        {
            printf ("Thirty Eight");
            x = x - 38000;
        }
        else if (d2 == 39)
        {
            printf ("Thirty Nine");
            x = x - 39000;
        }
    }

    if (d1 == 4)
    {
        if (d2 == 40)
        {
            printf ("Forty");
            x = x - 40000;
        }
        else if (d2 == 41)
        {
            printf ("Forty One");
            x = x - 41000;
        }
        else if (d2 == 42)
        {
            printf ("Forty Two");
            x = x - 42000;
        }
        else if (d2 == 43)
        {
            printf ("Forty Three");
            x = x - 43000;
        }
        else if (d2 == 44)
        {
            printf ("Forty Four");
            x = x - 44000;
        }
        else if (d2 == 45)
        {
            printf ("Forty Five");
            x = x - 45000;
        }
        else if (d2 == 46)
        {
            printf ("Forty Six");
            x = x - 46000;
        }
        else if (d2 == 47)
        {
            printf ("Forty Seven");
            x = x - 47000;
        }
       else if (d2 == 48)
        {
            printf ("Forty Eight");
            x = x - 48000;
        }
        else if (d2 == 49)
        {
            printf ("Forty Nine");
            x = x - 49000;
        }
    }

    if (d1 == 5)
    {
        if (d2 == 50)
        {
            printf ("Fifty");
            x = x - 50000;
        }
        else if (d2 == 51)
        {
            printf ("Fifty One");
            x = x - 51000;
        }
        else if (d2 == 52)
        {
            printf ("Fifty Two");
            x = x - 52000;
        }
        else if (d2 == 53)
        {
            printf ("Fifty Three");
            x = x - 53000;
        }
        else if (d2 == 54)
        {
            printf ("Fifty Four");
            x = x - 54000;
        }
        else if (d2 == 55)
        {
            printf ("Fifty Five");
            x = x - 55000;
        }
        else if (d2 == 56)
        {
            printf ("Fifty Six");
            x = x - 56000;
        }
        else if (d2 == 57)
        {
            printf ("Fifty Seven");
            x = x - 57000;
        }
       else if (d2 == 58)
        {
            printf ("Fifty Eight");
            x = x - 58000;
        }
        else if (d2 == 59)
        {
            printf ("Fifty Nine");
            x = x - 59000;
        }
    }

    if (d1 == 6)
    {
        if (d2 == 60)
        {
            printf ("Sixty");
            x = x - 60000;
        }
        else if (d2 == 61)
        {
            printf ("Sixty One");
            x = x - 61000;
        }
        else if (d2 == 62)
        {
            printf ("Sixty Two");
            x = x - 62000;
        }
        else if (d2 == 63)
        {
            printf ("Sixty Three");
            x = x - 63000;
        }
        else if (d2 == 64)
        {
            printf ("Sixty Four");
            x = x - 64000;
        }
        else if (d2 == 65)
        {
            printf ("Sixty Five");
            x = x - 65000;
        }
        else if (d2 == 66)
        {
            printf ("Sixty Six");
            x = x - 66000;
        }
        else if (d2 == 67)
        {
            printf ("Sixty Seven");
            x = x - 67000;
        }
       else if (d2 == 68)
        {
            printf ("Sixty Eight");
            x = x - 68000;
        }
        else if (d2 == 69)
        {
            printf ("Sixty Nine");
            x = x - 69000;
        }
    }

    if (d1 == 7)
    {
        if (d2 == 70)
        {
            printf ("Seventy");
            x = x - 70000;
        }
        else if (d2 == 71)
        {
            printf ("Seventy One");
            x = x - 71000;
        }
        else if (d2 == 72)
        {
            printf ("Seventy Two");
            x = x - 72000;
        }
        else if (d2 == 73)
        {
            printf ("Seventy Three");
            x = x - 73000;
        }
        else if (d2 == 74)
        {
            printf ("Seventy Four");
            x = x - 74000;
        }
        else if (d2 == 75)
        {
            printf ("Seventy Five");
            x = x - 75000;
        }
        else if (d2 == 76)
        {
            printf ("Seventy Six");
            x = x - 76000;
        }
        else if (d2 == 77)
        {
            printf ("Seventy Seven");
            x = x - 77000;
        }
       else if (d2 == 78)
        {
            printf ("Seventy Eight");
            x = x - 78000;
        }
        else if (d2 == 79)
        {
            printf ("Seventy Nine");
            x = x - 79000;
        }
    }

    if (d1 == 8)
    {
        if (d2 == 80)
        {
            printf ("Eighty");
            x = x - 80000;
        }
        else if (d2 == 81)
        {
            printf ("Eighty One");
            x = x - 81000;
        }
        else if (d2 == 82)
        {
            printf ("Eighty Two");
            x = x - 82000;
        }
        else if (d2 == 83)
        {
            printf ("Eighty Three");
            x = x - 83000;
        }
        else if (d2 == 84)
        {
            printf ("Eighty Four");
            x = x - 84000;
        }
        else if (d2 == 85)
        {
            printf ("Eighty Five");
            x = x - 85000;
        }
        else if (d2 == 86)
        {
            printf ("Eighty Six");
            x = x - 86000;
        }
        else if (d2 == 87)
        {
            printf ("Eighty Seven");
            x = x - 87000;
        }
       else if (d2 == 88)
        {
            printf ("Eighty Eight");
            x = x - 88000;
        }
        else if (d2 == 89)
        {
            printf ("Eighty Nine");
            x = x - 89000;
        }
    }

    if (d1 == 9)
    {
        if (d2 == 90)
        {
            printf ("Ninety");
            x = x - 90000;
        }
        else if (d2 == 91)
        {
            printf ("Ninety One");
            x = x - 91000;
        }
        else if (d2 == 92)
        {
            printf ("Ninety Two");
            x = x - 92000;
        }
        else if (d2 == 93)
        {
            printf ("Ninety Three");
            x = x - 93000;
        }
        else if (d2 == 94)
        {
            printf ("Ninety Four");
            x = x - 94000;
        }
        else if (d2 == 95)
        {
            printf ("Ninety Five");
            x = x - 95000;
        }
        else if (d2 == 96)
        {
            printf ("Ninety Six");
            x = x - 96000;
        }
        else if (d2 == 97)
        {
            printf ("Ninety Seven");
            x = x - 97000;
        }
       else if (d2 == 98)
        {
            printf ("Ninety Eight");
            x = x - 98000;
        }
        else if (d2 == 99)
        {
            printf ("Ninety Nine");
            x = x - 99000;
        }
    }

    printf (" Thousand ");

    int d3 = x / 100;
    if (d3 == 1)
    {
        printf ("One Hundred");
        x = x - 100;
    }
    else if (d3 == 2)
    {
        printf ("Two Hundred");
        x = x - 200;
    }
    else if (d3 == 3)
    {
        printf ("Three Hundred");
        x = x - 300;
    }
    else if (d3 == 4)
    {
        printf ("Four Hundred");
        x = x - 400;
    }
    else if (d3 == 5)
    {
        printf ("Five Hundred");
        x = x - 500;
    }
    else if (d3 == 6)
    {
        printf ("Six Hundred");
        x = x - 600;
    }
    else if (d3 == 7)
    {
        printf ("Seven Hundred");
        x = x - 700;
    }
    else if (d3 == 8)
    {
        printf ("Eight Hundred");
        x = x - 800;
    }
    else if (d3 == 9)
    {
        printf ("Nine Hundred");
        x = x - 900;
    }

    int d4 = x / 10;

    if (d4 == 1)
    {
        if (x == 10)
            printf (" and Ten");
        else if (x == 11)
            printf (" and Eleven");
        else if (x == 12)
            printf (" and Twelve");
        else if (x == 13)
            printf (" and Thirteen");
        else if (x == 11)
            printf (" and Fourteen");
        else if (x == 15)
            printf (" and Fifteen");
        else if (x == 16)
            printf (" and Sixteen");
        else if (x == 17)
            printf (" and Seventeen");
        else if (x == 18)
            printf (" and Eighteen");
        else if (x == 19)
            printf (" and Nineteen");
    }

    if (d4 == 2)
    {
        if (x == 20)
            printf (" and Twenty");
        else if (x == 21)
            printf (" and Twenty One");
        else if (x == 22)
            printf (" and Twenty Two");
        else if (x == 23)
            printf (" and Twenty Three");
        else if (x == 24)
            printf (" and Twenty Four");
        else if (x == 25)
            printf (" and Twenty Five");
        else if (x == 26)
            printf (" and Twenty Six");
        else if (x == 27)
            printf (" and Twenty Seven");
        else if (x == 28)
            printf (" and Twenty Eight");
        else if (x == 29)
            printf (" and Twenty Nine");
    }

    if (d4 == 3)
    {
        if (x == 30)
            printf (" and Thirty");
        else if (x == 31)
            printf (" and Thirty One");
        else if (x == 32)
            printf (" and Thirty Two");
        else if (x == 33)
            printf (" and Thirty Three");
        else if (x == 34)
            printf (" and Thirty Four");
        else if (x == 35)
            printf (" and Thirty Five");
        else if (x == 36)
            printf (" and Thirty Six");
        else if (x == 37)
            printf (" and Thirty Seven");
        else if (x == 38)
            printf (" and Thirty Eight");
        else if (x == 39)
            printf (" and Thirty Nine");
    }

    if (d4 == 4)
    {
        if (x == 40)
            printf (" and Forty");
        else if (x == 41)
            printf (" and Forty One");
        else if (x == 42)
            printf (" and Forty Two");
        else if (x == 43)
            printf (" and Forty Three");
        else if (x == 44)
            printf (" and Forty Four");
        else if (x == 45)
            printf (" and Forty Five");
        else if (x == 46)
            printf (" and Forty Six");
        else if (x == 47)
            printf (" and Forty Seven");
        else if (x == 48)
            printf (" and Forty Eight");
        else if (x == 49)
            printf (" and Forty Nine");
    }

    if (d4 == 5)
    {
        if (x == 50)
            printf (" and Fifty");
        else if (x == 51)
            printf (" and Fifty One");
        else if (x == 52)
            printf (" and Fifty Two");
        else if (x == 53)
            printf (" and Fifty Three");
        else if (x == 54)
            printf (" and Fifty Four");
        else if (x == 55)
            printf (" and Fifty Five");
        else if (x == 56)
            printf (" and Fifty Six");
        else if (x == 57)
            printf (" and Fifty Seven");
        else if (x == 58)
            printf (" and Fifty Eight");
        else if (x == 59)
            printf (" and Fifty Nine");
    }

    if (d4 == 6)
    {
        if (x == 60)
            printf (" and Sixty");
        else if (x == 61)
            printf (" and Sixty One");
        else if (x == 62)
            printf (" and Sixty Two");
        else if (x == 63)
            printf (" and Sixty Three");
        else if (x == 64)
            printf (" and Sixty Four");
        else if (x == 65)
            printf (" and Sixty Five");
        else if (x == 66)
            printf (" and Sixty Six");
        else if (x == 67)
            printf (" and Sixty Seven");
        else if (x == 68)
            printf (" and Sixty Eight");
        else if (x == 69)
            printf (" and Sixty Nine");
    }

    if (d4 == 7)
    {
        if (x == 70)
            printf (" and Seventy");
        else if (x == 71)
            printf (" and Seventy One");
        else if (x == 72)
            printf (" and Seventy Two");
        else if (x == 73)
            printf (" and Seventy Three");
        else if (x == 74)
            printf (" and Seventy Four");
        else if (x == 75)
            printf (" and Seventy Five");
        else if (x == 76)
            printf (" and Seventy Six");
        else if (x == 77)
            printf (" and Seventy Seven");
        else if (x == 78)
            printf (" and Seventy Eight");
        else if (x == 79)
            printf (" and Seventy Nine");
    }

    if (d4 == 8)
    {
        if (x == 80)
            printf (" and Eighty");
        else if (x == 81)
            printf (" and Eighty One");
        else if (x == 82)
            printf (" and Eighty Two");
        else if (x == 83)
            printf (" and Eighty Three");
        else if (x == 84)
            printf (" and Eighty Four");
        else if (x == 85)
            printf (" and Eighty Five");
        else if (x == 86)
            printf (" and Eighty Six");
        else if (x == 87)
            printf (" and Eighty Seven");
        else if (x == 88)
            printf (" and Eighty Eight");
        else if (x == 89)
            printf (" and Eighty Nine");
    }

    if (d4 == 9)
    {
        if (x == 90)
            printf (" and Ninety");
        else if (x == 91)
            printf (" and Ninety One");
        else if (x == 92)
            printf (" and Ninety Two");
        else if (x == 93)
            printf (" and Ninety Three");
        else if (x == 94)
            printf (" and Ninety Four");
        else if (x == 95)
            printf (" and Ninety Five");
        else if (x == 96)
            printf (" and Ninety Six");
        else if (x == 97)
            printf (" and Ninety Seven");
        else if (x == 98)
            printf (" and Ninety Eight");
        else if (x == 99)
            printf (" and Ninety Nine");
    }

    if (d4 == 0)
    {
        if (x % 10 == 0)
            printf ("");
        else if (x % 10 == 1)
            printf (" and One");
        else if (x % 10 == 2)
            printf (" and Two");
        else if (x % 10 == 3)
            printf (" and Three");
        else if (x % 10 == 4)
            printf (" and Four");
        else if (x % 10 == 5)
            printf (" and Five");
        else if (x % 10 == 6)
            printf (" and Six");
        else if (x % 10 == 7)
            printf (" and Seven");
        else if (x % 10 == 8)
            printf (" and Eight");
        else if (x % 10 == 9)
            printf (" and Nine");
    }
    printf ("\n");

    return 0;
}
