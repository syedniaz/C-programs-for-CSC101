#include <stdio.h>

int main () {

    printf ("Welcome to C bank ATM\n\n");
    printf ("(Warning only 1000 and 500 note available)\nEnter the amount you want to withdraw : ");
    int money;
    scanf ("%d", &money);

    if (money % 500 == 0) {
        if ( money > 50000) {
        printf ("\nThe amount is more than 50000\n");
        }
    printf ("************************************************************************************\n");
    printf ("Total amount to be withdrawn : \t %d\n", money);
    printf ("____________________________________________________________________________________\n");

    int thousandNotes;
    thousandNotes = money / 1000;
    money = money % 1000;

    int FiveHundredNotes;
    FiveHundredNotes = money / 500;
    money = money % 500;

    printf ("Number of 1000tk notes : \t %d\n", thousandNotes);
    printf ("Number of 500tk notes : \t %d\n", FiveHundredNotes);
    printf ("************************************************************************************\n");
    printf ("Thank you for choosing C bank \n");

    } else {
        printf ("************************************************************************************\n");
        printf ("\nPlease enter a valid amount which is multiple of 500\n");
    }


    return 0;
}

