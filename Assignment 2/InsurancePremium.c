#include <stdio.h>

int main () {

    printf ("Sex?(M/F): ");
    char sex;
    char incase;
    scanf ("%c%c", &sex, &incase); // incase used to solve storing enter as character // can also use getchar()

    printf ("Is the person in good health?(Y/N): ");
    char health; // char health = getchar();
    scanf ("%c%c", &health, &incase);// or use getchar() in next line after using scanf

    printf ("Does the person live in a city(C) or a village(V)?(C/V): ");
    char place;
    scanf ("%c%c", &place, &incase);

    printf ("Enter the person's age: ");
    int age;
    scanf ("%d", &age);

    printf ("Enter the amount of insurance policy: ");
    int insurance;
    scanf ("%d", &insurance);

    printf ("************************************************************************************\n");

    int per_thousand = 0;

    if ( (sex == 'M' || sex == 'm') && (age >= 25 && age <= 35) && (health == 'Y' || health == 'y') && (place == 'C' || place == 'c') && insurance <= 200000 ) {
        per_thousand = 4;
        printf ("The person's policy amount cannot exceed 200,000 and premium is %d Taka per thousand\n", per_thousand);
    } else if ( (sex == 'F' || sex == 'f') && (age >= 25 && age <= 35) && (health == 'Y' || health == 'y') && (place == 'C' || place == 'c') && insurance <= 100000 ) {
        per_thousand = 3;
        printf ("The person's policy amount cannot exceed 100,000 and premium is %d Taka per thousand\n", per_thousand);
    } else if ( (sex == 'M' || sex == 'm') && (age >= 25 && age <= 35) && (health == 'N' || health == 'n') && (place == 'V' || place == 'v') && insurance <= 10000 ) {
        per_thousand = 6;
        printf ("The person's policy amount cannot exceed 10,000 and premium is %d Taka per thousand\n", per_thousand);
    } else {
        printf ("The person is not insured. Please ignore the information that follows this. Thank you\n");
    }


    int premium = (insurance / 1000) * per_thousand;

    printf ("************************************************************************************\n");
    printf ("Sex :\t\t%c\n", sex);
    printf ("Age :\t\t%d\n", age);
    printf ("Healthy :\t%c\n", health);
    printf ("City or Village :%c\n", place);
    printf ("Policy amount :%d\n", insurance);
    printf ("______________________________________________________________________________________\n");
    printf ("Premium : %d\n", premium);
    printf ("Thank you!!\n");


    return 0;
}
