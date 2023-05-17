#include <stdio.h>

int main () {

    printf ("Welcome to C bank student ATM\n\n");
    printf ("Enter the amount you want to withdraw : ");
    int money;
    scanf ("%d", &money);

    printf ("************************************************************************************\n");
    printf ("Total amount to be withdrawn : \t %d\n", money);
    printf ("____________________________________________________________________________________\n");

    int thousandNotes;
    thousandNotes = money / 1000;
    money = money % 1000;

    int FiveHundredNotes;
    FiveHundredNotes = money / 500;
    money = money % 500;

    int OneHundredNotes;
    OneHundredNotes = money / 100;
    money = money % 100;

    int FiftyNotes;
    FiftyNotes = money / 50;
    money = money % 50;

    int TenNotes;
    TenNotes = money / 10;
    money = money % 10;

    int FiveNotes;
    FiveNotes = money / 5;
    money = money % 5;

    int OneNotes;
    OneNotes = money / 1;
    money = money % 1;

    printf ("Number of 1000tk notes : \t %d\n", thousandNotes);
    printf ("Number of 500tk notes : \t %d\n", FiveHundredNotes);
    printf ("Number of 100tk notes : \t %d\n", OneHundredNotes);
    printf ("Number of 50tk notes : \t\t %d\n", FiftyNotes);
    printf ("Number of 10tk notes : \t\t %d\n", TenNotes);
    printf ("Number of 5tk notes : \t\t %d\n", FiveNotes);
    printf ("Number of 1tk notes : \t\t %d\n", OneNotes);
    printf ("************************************************************************************\n");
    printf ("Thank you for choosing C bank \n");


    return 0;
}
