#include <stdio.h>
#define Overtime_rate 14.00
int main ()
{
    //declare first
    char staff_position;
    int staff_name,overtime_hours,staff_id;
    float salary, nett_salary, bonus, allowance;

    //Payroll System title
    printf ("-----------------------------------------\n");
    printf ("\t      PAYROLL SYSTEM\n");
    printf ("-----------------------------------------\n");
    printf ("\t 1. Lecture\n");
    printf ("\t 2. Clerk\n");
    printf ("\t 3. Technician\n");

    printf("\n Enter staff name: ");
    scanf("%d", staff_name);

    printf("Enter staff ID: ");
    scanf("%d", &staff_id);

    printf("Enter Position Code: ");
    scanf("%c", &staff_position);

    printf("Enter salary: ");
    scanf("%f", &salary);

    //switch case

    switch (staff_position)
{
    case 1:

        printf("Position : Lecturer" );
        printf("Enter Allowance: ");
        scanf ("%d", &allowance);
        printf ("Nett Salary : %.2f", nett_salary = salary + allowance);
        break;


    case 2:

        printf("Position : Clerk" );
        printf("Enter Bonus: ");
        scanf ("%d", &bonus);
        printf ("Nett Salary : %.2f", nett_salary = salary + bonus);
        break;


    case 3:

        printf("Position : Technician" );
        printf("Enter Overtime Hours: ");
        scanf ("%d", &overtime_hours);
        printf ("Nett Salary : %.2f", nett_salary = salary + overtime_hours * Overtime_rate);
        break;
}
    if (staff_position >4)
        printf ("Invalid");
        printf ("Nett salary = RM0.00");

//somehow it got error

    return (0);
}
