#include <stdio.h>
float SalaryCalculator (float salary, float rent_rate, float tax_rate)
{
    float rent = salary * ( rent_rate / 100.0);
    float tax = salary * ( tax_rate / 100.0);
    float net_salary = salary + rent - tax;
    return net_salary;
}
int main ()
{
    int salary, rent_rate, tax_rate;
    printf ("Enter basic salary: ");
    scanf ("%d", &salary);
    printf ("Enter rent rate: ");
    scanf ("%d", &rent_rate);
    printf ("Enter tax rate: ");
    scanf ("%d", &tax_rate);
    float net_salary = SalaryCalculator (salary, rent_rate, tax_rate);
    printf ("Net salary = %.1f", net_salary);
    return 0;
}
