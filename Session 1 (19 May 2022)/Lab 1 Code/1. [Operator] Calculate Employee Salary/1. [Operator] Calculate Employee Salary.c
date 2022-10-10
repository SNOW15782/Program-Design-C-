#include <stdio.h>
int main ()
{
    float salary, deduction, bonus, nett_Salary; //declare the float number

    printf("Enter Salary: "); //user enter salary here
    scanf ("%f", &salary); //salary data will store here

    printf("Enter bonus: "); //user enter bonus here
    scanf ("%f", &bonus); //bonus data will store here

    printf("Enter deduction: "); //user enter deduction here
    scanf ("%f", &deduction); //bonus data will store here

    nett_Salary = salary + bonus - deduction; //declare the operator to get the nett salary

    printf("Salary: RM%.2f\n", salary); //salary display here
    printf("Bonus: RM%.2f \n", bonus); //bonus display here
    printf("Deduction: RM%.2f \n", deduction); // deduction display here
    printf("Nett Salary: RM%.2f \n", nett_Salary); //nett salary display here %.2f will display 2 decimal values

    return (0);
}
