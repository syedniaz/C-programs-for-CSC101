#include <stdio.h>

int main () {

    printf ("Enter the number of kgs of potato you want to buy : ");
    float potatoKg;
    scanf ("%f", &potatoKg);

    printf ("Enter the number of kgs of onions you want to buy : ");
    float onionKg;
    scanf ("%f", &onionKg);

    float potatopriceperkg;
    float onionpriceperkg;
    printf ("Enter the price per kg of potatoes : ");
    scanf ("%f", &potatopriceperkg);
    printf ("Enter the price per kg of onions : ");
    scanf ("%f", &onionpriceperkg);

    float totalpotatoprice = potatoKg * potatopriceperkg;
    float totalonionprice = onionKg * onionpriceperkg;
    float total = totalpotatoprice + totalonionprice;

    printf ("\n");
    printf ("************************************************************************************\n");
    printf ("Quantity of potatoes : \t\t %.2f kg\n", potatoKg);
    printf ("Total price of potatoes : \t %.2f\n", totalpotatoprice);
    printf ("Quantity of onions : \t\t %.2f kg\n", onionKg);
    printf ("Total price of potatos : \t %.2f\n", totalonionprice);
    printf ("____________________________________________________________________________________\n");
    printf ("Total cost : %.2f Taka\n", total);

    if ( total >= 1000 ){
        float discount_rate = 0.10;
        float discount = total * discount_rate;
        printf ("-10%% discount = %.2f\n", discount);
        float gross = total - discount;
        printf ("Gross cost : %.2f\n", gross);
    }

    return 0;
}
