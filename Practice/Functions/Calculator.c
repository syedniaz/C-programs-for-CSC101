#include<stdio.h>
/*
    Input = float a, float b (arguments or parameters of functions)
    Output = float (Sum of two numbers)
*/
float Add(float a, float b)
{
    float sum = a + b;
    return sum;
}

float Subtract(float a, float b)
{
    float sub = a - b;
    return sub;
}

float Multiply(float a, float b)
{
    float mul = a * b;
    return mul;
}

float Divide(float a, float b)
{
    if (b==0)
    {
        printf ("Division is not possible\n");
        return 0;
    }
    float div = a / b;

    return div;
}

int main()
{
    int choice;
    do{
        printf("Press 1 to add numbers\n");
        printf("Press 2 to subtract numbers \n");
        printf("Press 3 to multiply numbers \n");
        printf("Press 4 to divide numbers \n");
        printf("Enter 5 for factorial\n");
        printf("Enter 6 to calculate x^y\n");
        printf("Enter 7 to convert from decimal to binary\n");
        printf("Enter 8 to convert from binary to decimal\n");
        printf("Enter 9 to see the menu again\n");
        printf("Enter 0 to exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 1)
        {
            float a, b;
            printf("Enter first operand:");
            scanf("%f", &a);
            printf("Enter second operand:");
            scanf("%f", &b);
            float s = Add(a, b);
            printf("Sum = %f\n", s);
        }
        else if(choice == 2)
        {
            float a, b;
            printf("Enter first operand:");
            scanf("%f", &a);
            printf("Enter second operand:");
            scanf("%f", &b);
            float s = Subtract(a, b);
            printf("Subraction = %f\n", s);
        }
        else if(choice == 3)
        {
            float a, b;
            printf("Enter first operand:");
            scanf("%f", &a);
            printf("Enter second operand:");
            scanf("%f", &b);
            float s = Multiply(a, b);
            printf("Product = %f\n", s);
        }
        else if(choice == 4)
        {
            float a, b;
            printf("Enter first operand:");
            scanf("%f", &a);
            printf("Enter second operand:");
            scanf("%f", &b);
            float s = Divide(a, b);
            printf ("Division = %f\n", s);
        }
        else if (choice == 5)
        {

        }
        else if (choice == 6)
        {

        }
        else if (choice == 7)
        {

        }
        else if (choice == 8)
        {

        }
    } while (choice >= 1 && choice <= 9);

}
